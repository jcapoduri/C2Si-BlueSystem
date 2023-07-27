SET AUTO_COMMIT = 0;

start transaction;

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";

ALTER TABLE `workorders`
ADD `conAbrochado` tinyint(1) unsigned NOT NULL DEFAULT 0,
ADD `howtoFlags` int(11) unsigned NOT NULL DEFAULT 0;

rollback;

SET AUTO_COMMIT = 1;