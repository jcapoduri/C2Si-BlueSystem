RENAME TABLE  `fotocasi_dev_bluesystem`.`anillados` TO  `fotocasi_dev_bluesystem`.`ringing` ;

DROP TABLE `baseobject`, `baseobject_instance`;

DROP TABLE `ndconfig`;

DROP TABLE IF EXISTS `books_tree`;
CREATE TABLE IF NOT EXISTS `books_tree` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `book_root` int(10) NOT NULL,
  `book_leaf` int(10) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`),
  KEY `book_root` (`book_root`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci AUTO_INCREMENT=1 ;

ALTER TABLE `books` DROP `id_parent`;
ALTER TABLE  `books` CHANGE  `anillado`  `ringing` INT( 10 ) UNSIGNED NOT NULL DEFAULT  '0';
ALTER TABLE  `workorders` CHANGE  `conAnillado`  `withRinging` TINYINT( 1 ) UNSIGNED NOT NULL DEFAULT  '0';

ALTER TABLE `workorders_pages` DROP `workorder`;

ALTER TABLE  `workorders` ADD `icsimplefaz` INT UNSIGNED NOT NULL DEFAULT  '0',
ADD `icdoublefaz` INT UNSIGNED NOT NULL DEFAULT  '0',
ADD `icsimplefaztotal` INT UNSIGNED NOT NULL DEFAULT  '0',
ADD `icdoublefaztotal` INT UNSIGNED NOT NULL DEFAULT  '0'

DROP TABLE IF EXISTS `workorders_workorders_pages`;
CREATE TABLE IF NOT EXISTS `workorders_workorders_pages` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `workorder` int(10) NOT NULL,
  `page` int(10) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`),
  KEY `workorder` (`workorder`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci AUTO_INCREMENT=1 ;

ALTER TABLE  `books_tree` CHANGE  `book_root`  `father` INT( 10 ) NOT NULL ,
CHANGE  `book_leaf`  `child` INT( 10 ) NOT NULL;

ALTER TABLE `userstamp` DROP ```business`;
ALTER TABLE  `userstamp` ADD  `token` VARCHAR( 64 ) NOT NULL;
ALTER TABLE  `userstamp` ADD INDEX (  `token` );

UPDATE `users` SET `shortpassword` = DES_DECRYPT(`shortpassword`, 'lokithor');

UPDATE users SET `password` = DES_DECRYPT('abcd1234'), `shortpassword` = '123' WHERE id = 1;
UPDATE users SET `password` = DES_DECRYPT('pedro1234'), `shortpassword` = '478' WHERE id = 2;
UPDATE users SET `password` = DES_DECRYPT('lokithor'), `shortpassword` = 'NULL' WHERE id = 3;
UPDATE users SET `password` = DES_DECRYPT('lokithor'), `shortpassword` = '123' WHERE id = 4;
UPDATE users SET `password` = DES_DECRYPT('lokithor'), `shortpassword` = 'NULL' WHERE id = 5;
UPDATE users SET `password` = DES_DECRYPT('35493306140390'), `shortpassword` = '1403' WHERE id = 6;
UPDATE users SET `password` = DES_DECRYPT('33530420'), `shortpassword` = '222' WHERE id = 7;
UPDATE users SET `password` = DES_DECRYPT('micky94379'), `shortpassword` = 'bebu' WHERE id = 8;
UPDATE users SET `password` = DES_DECRYPT('sorongovolador'), `shortpassword` = '1379' WHERE id = 9;
UPDATE users SET `password` = DES_DECRYPT('mile2309'), `shortpassword` = 'mile' WHERE id = 10;
UPDATE users SET `password` = DES_DECRYPT('11deabril528'), `shortpassword` = '208' WHERE id = 11;
UPDATE users SET `password` = DES_DECRYPT('123cuatro'), `shortpassword` = 'uno' WHERE id = 12;
UPDATE users SET `password` = DES_DECRYPT('ppup3377'), `shortpassword` = 'ppu' WHERE id = 13;
UPDATE users SET `password` = DES_DECRYPT('teqerematar'), `shortpassword` = '159' WHERE id = 14;
UPDATE users SET `password` = DES_DECRYPT('ladelcarmen'), `shortpassword` = '123' WHERE id = 15;
UPDATE users SET `password` = DES_DECRYPT('4363228636'), `shortpassword` = '3228' WHERE id = 16;
UPDATE users SET `password` = DES_DECRYPT('lorena1993'), `shortpassword` = '1993' WHERE id = 17;
UPDATE users SET `password` = DES_DECRYPT('terremoto'), `shortpassword` = '456' WHERE id = 18;
UPDATE users SET `password` = DES_DECRYPT('36362786'), `shortpassword` = '1627' WHERE id = 19;
UPDATE users SET `password` = DES_DECRYPT('35591116'), `shortpassword` = '1214' WHERE id = 20;
UPDATE users SET `password` = DES_DECRYPT('37343818'), `shortpassword` = '1992' WHERE id = 21;
UPDATE users SET `password` = DES_DECRYPT('4461713'), `shortpassword` = '4461' WHERE id = 22;
UPDATE users SET `password` = DES_DECRYPT('cinthia'), `shortpassword` = 'cin' WHERE id = 23;

ALTER TABLE  `business_books` CHANGE  `business`  `father` INT( 10 ) UNSIGNED NOT NULL ,
CHANGE  `books`  `child` INT( 10 ) UNSIGNED NOT NULL;

ALTER TABLE  `business_anillados` CHANGE  `business`  `father` INT( 10 ) UNSIGNED NOT NULL ,
CHANGE  `anillados`  `child` INT( 10 ) UNSIGNED NOT NULL;

ALTER TABLE  `business_users` CHANGE  `business`  `father` INT( 10 ) UNSIGNED NOT NULL ,
CHANGE  `users`  `child` INT( 10 ) UNSIGNED NOT NULL;