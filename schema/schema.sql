SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";

CREATE TABLE IF NOT EXISTS `anillados` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `name` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `cost` double NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=17 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `baseobject` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `baseobject_instance` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `checked` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `books` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `number` int(10) unsigned NOT NULL,
  `name` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `scopies` int(10) unsigned NOT NULL,
  `dcopies` int(10) unsigned NOT NULL,
  `anillado` int(10) unsigned NOT NULL,
  `id_parent` int(10) unsigned NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=306 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `business` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `name` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `address` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `owner` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `email` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `telephone` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `sfvalue` double NOT NULL,
  `dfvalue` double NOT NULL,
  `isfvalue` double NOT NULL,
  `idfvalue` double NOT NULL,
  `csfvalue` double NOT NULL,
  `cdfvalue` double NOT NULL,
  `business` int(10) unsigned NOT NULL,
  `icsfvalue` double unsigned NOT NULL,
  `icdfvalue` double unsigned NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `businesses` (
`id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `owner` varchar(255) DEFAULT NULL,
  `address` varchar(255) DEFAULT NULL,
  `createdAt` datetime NOT NULL,
  `updatedAt` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE IF NOT EXISTS `business_anillados` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `business` int(10) unsigned NOT NULL,
  `anillados` int(10) unsigned NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `business_books` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `business` int(10) unsigned NOT NULL,
  `books` int(10) unsigned NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `business_users` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `users` int(11) DEFAULT NULL,
  `business` int(11) DEFAULT NULL
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `client` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `jobs` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `date` date NOT NULL,
  `hour` time NOT NULL,
  `filetitle` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `book` int(11) NOT NULL,
  `kind` int(11) NOT NULL,
  `done` tinyint(1) NOT NULL,
  `ignore` tinyint(1) NOT NULL,
  `userowner` int(10) unsigned NOT NULL,
  `business` int(10) unsigned NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `jobs_workorders` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `jobs` int(10) NOT NULL,
  `workorders` int(10) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `ndconfig` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `systemname` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `systemmajorversion` int(11) NOT NULL,
  `systemminorversion` int(11) NOT NULL,
  `systemcompileversion` int(11) NOT NULL,
  `systemtypeversion` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `infolog_file` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `warninglog_file` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `errorlog_file` varchar(1024) COLLATE utf8_spanish_ci NOT NULL,
  `lastcheck` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `checked` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `userlog` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `desc` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `table` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `obj_id` int(10) NOT NULL,
  `business` int(10) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=113 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `users` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `name` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `lastname` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `username` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `password` varbinary(100) NOT NULL,
  `shortpassword` varbinary(100) NOT NULL,
  `birthdate` date NOT NULL,
  `email` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `telephone` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `active` tinyint(1) NOT NULL DEFAULT '1',
  `admin` tinyint(1) NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `userstamp` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `initstamp` datetime NOT NULL,
  `endstamp` datetime NOT NULL,
  `business` int(10) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=52 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `workorders` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `description` varchar(1024) COLLATE utf8_spanish_ci NOT NULL DEFAULT '0',
  `costumername` varchar(1024) COLLATE utf8_spanish_ci NOT NULL DEFAULT '0',
  `observations` text COLLATE utf8_spanish_ci NOT NULL,
  `copies` int(10) unsigned NOT NULL DEFAULT '0',
  `conAnillado` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `doComplete` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `lista` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `entregado` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `deadline` datetime NOT NULL,
  `simplefaz` double unsigned NOT NULL DEFAULT '0',
  `doublefaz` double unsigned NOT NULL DEFAULT '0',
  `isimplefaz` double unsigned NOT NULL DEFAULT '0',
  `idoublefaz` double unsigned NOT NULL DEFAULT '0',
  `csimplefaz` double unsigned NOT NULL DEFAULT '0',
  `cdoublefaz` double unsigned NOT NULL DEFAULT '0',
  `simplefaztotal` double unsigned NOT NULL DEFAULT '0',
  `doublefaztotal` double unsigned NOT NULL DEFAULT '0',
  `isimplefaztotal` double unsigned NOT NULL DEFAULT '0',
  `idoublefaztotal` double unsigned NOT NULL DEFAULT '0',
  `csimplefaztotal` double unsigned NOT NULL DEFAULT '0',
  `cdoublefaztotal` double unsigned NOT NULL DEFAULT '0',
  `senna` double NOT NULL,
  `anillado` double NOT NULL,
  `total` double NOT NULL,
  `estado` int(11) NOT NULL,
  `howto` int(11) NOT NULL,
  `business` int(11) NOT NULL,
  `anilladoHowTo` int(11) NOT NULL,
  `ignore` tinyint(1) NOT NULL,
  `userowner` int(10) unsigned NOT NULL,
  `outoforder` int(10) unsigned NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE IF NOT EXISTS `workorders_pages` (
  `id` int(10) unsigned AUTO_INCREMENT NOT NULL PRIMARY KEY,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `workorder` int(10) unsigned NOT NULL,
  `pagefrom` int(11) NOT NULL,
  `pageto` int(11) NOT NULL,
  `business` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

--
-- Indices de la tabla `anillados`
--
ALTER TABLE `anillados`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `baseobject`
--
ALTER TABLE `baseobject`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `books`
--
ALTER TABLE `books`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`), ADD KEY `id_parent` (`id_parent`);

--
-- Indices de la tabla `business`
--
ALTER TABLE `business`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `business_anillados`
--
ALTER TABLE `business_anillados`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `business_books`
--
ALTER TABLE `business_books`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `business_users`
--
ALTER TABLE `business_users`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `client`
--
ALTER TABLE `client`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `jobs`
--
ALTER TABLE `jobs`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `jobs_workorders`
--
ALTER TABLE `jobs_workorders`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `ndconfig`
--
ALTER TABLE `ndconfig`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `userlog`
--
ALTER TABLE `userlog`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `users`
--
ALTER TABLE `users`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `userstamp`
--
ALTER TABLE `userstamp`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `workorders`
--
ALTER TABLE `workorders`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`);

--
-- Indices de la tabla `workorders_pages`
--
ALTER TABLE `workorders_pages`
 ADD KEY `last_instance` (`last_instance`), ADD KEY `user_id` (`user_id`), ADD KEY `workorder` (`workorder`), ADD KEY `business` (`business`);
