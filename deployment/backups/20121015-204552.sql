DROP TABLE anillados;

CREATE TABLE `anillados` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `name` varchar(512) COLLATE utf8_spanish_ci NOT NULL,
  `cost` double NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO anillados VALUES("5","2012-09-20 15:23:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","8","1.5");



DROP TABLE baseobject;

CREATE TABLE `baseobject` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;




DROP TABLE baseobject_instance;

CREATE TABLE `baseobject_instance` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;




DROP TABLE books;

CREATE TABLE `books` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  `id_parent` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`),
  KEY `id_parent` (`id_parent`)
) ENGINE=InnoDB AUTO_INCREMENT=306 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO books VALUES("1","2012-10-15 13:45:22","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 1","0","0","5","0");
INSERT INTO books VALUES("2","2012-10-15 13:45:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 2","0","0","5","0");
INSERT INTO books VALUES("3","2012-10-15 13:46:10","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 3","0","0","5","0");
INSERT INTO books VALUES("4","2012-10-15 13:46:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 4","0","0","5","0");
INSERT INTO books VALUES("5","2012-10-15 13:47:11","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 5","0","0","5","0");
INSERT INTO books VALUES("6","2012-10-15 13:48:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 6","0","0","5","0");
INSERT INTO books VALUES("7","2012-10-15 13:49:12","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","0","Caja 7","0","0","5","0");
INSERT INTO books VALUES("8","2012-10-15 13:56:52","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","1","Estados contables en moneda constante-Ediciones Macchi.pdf","0","0","1","1");
INSERT INTO books VALUES("9","2012-10-15 13:56:53","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","3","Curso breve de macroeconomia-6ta Ed-Dornbusch-Fischer-McGraw Hill.pdf","0","0","1","1");
INSERT INTO books VALUES("10","2012-10-15 13:56:54","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","4","Contabilidad superior tomo1-Ediciones Macchi.pdf","0","0","1","1");
INSERT INTO books VALUES("11","2012-10-15 13:56:54","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","5","Curso de obligaciones-Tomo1-Alterini-Abeledo Perrot.pdf","0","0","1","1");
INSERT INTO books VALUES("12","2012-10-15 13:56:55","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","5","Curso de obligaciones-Tomo2-Alterini-Abeledo Perrot.pdf","0","0","1","1");
INSERT INTO books VALUES("13","2012-10-15 13:56:56","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","7","Macroeconomia- de Pablo.pdf","0","0","1","1");
INSERT INTO books VALUES("14","2012-10-15 13:56:56","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","8","Macroeconomia-Branson;Litvack-MÇxico.pdf","0","0","1","1");
INSERT INTO books VALUES("15","2012-10-15 13:56:57","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","9","Quimica Biologica-Antonio Blanco-5ta Ed.-El Ateneo.pdf","0","0","1","1");
INSERT INTO books VALUES("16","2012-10-15 13:56:58","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","10","Administraci¢n-3ra Ed-Hampton-McGraw Hill.pdf","0","0","1","1");
INSERT INTO books VALUES("17","2012-10-15 13:56:58","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","11","Metodos fundamentales de economia matematica-Chiang-McGraw Hill.pdf","0","0","1","1");
INSERT INTO books VALUES("18","2012-10-15 13:56:59","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","12","Comercializaci¢n-Levz Alberto.pdf","0","0","1","1");
INSERT INTO books VALUES("19","2012-10-15 13:56:59","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","13","Componentes de sistemas de control-parte 1-Lorenzo.pdf","0","0","1","1");
INSERT INTO books VALUES("20","2012-10-15 13:57:00","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","16","Arquitecturas de computadoras- capitulo 3 en adelante.pdf","0","0","1","1");
INSERT INTO books VALUES("21","2012-10-15 13:57:00","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","17","Manual de contratos - 16 edicion actualizada - Guillermo Borda - Editorial Perrot 1¯ parte.pdf","0","0","1","1");
INSERT INTO books VALUES("22","2012-10-15 13:57:01","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","17","Manual de contratos - 16 edicion actualizada - Guillermo Borda - Editorial Perrot 2¯ parte.pdf","0","0","1","1");
INSERT INTO books VALUES("23","2012-10-15 13:57:02","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","17","Manual de contratos - 16 edicion actualizada - Guillermo Borda - Editorial Perrot.pdf","0","0","1","1");
INSERT INTO books VALUES("24","2012-10-15 13:57:02","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","18","Manual de obligaciones - Ed 20 - Guillermo Borda - LexisNexis Abeledo-Perrot.pdf","0","0","1","1");
INSERT INTO books VALUES("25","2012-10-15 13:57:03","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","19","Administracion Finaciera - Joel G Siegel.pdf","0","0","1","1");
INSERT INTO books VALUES("26","2012-10-15 13:57:04","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","20","Regimen de Sociedades Comerciales - Ed 21 - Jorge Osvaldo Zunino - Astrea.pdf","0","0","1","1");
INSERT INTO books VALUES("27","2012-10-15 13:57:05","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","22","Economia - 13 edicion - Samuelson, Nordhaus.pdf","0","0","1","1");
INSERT INTO books VALUES("28","2012-10-15 13:57:05","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","23","Normas Contables Vigentes en Capital Federal y Provincia - .pdf","0","0","1","1");
INSERT INTO books VALUES("29","2012-10-15 13:57:06","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","24","Teoria de Precios y sus aplicaciones - Jack Hirshleifer - Prentice-Hall International.pdf","0","0","1","1");
INSERT INTO books VALUES("30","2012-10-15 13:57:07","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","25","Administracion y estrategia- 3¯ edicion - Jorge Hermida , Roberto Serra -Ediciones Macchi .pdf","0","0","1","1");
INSERT INTO books VALUES("31","2012-10-15 13:57:07","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","26","Administracion Finaciera - Ed 7 - James C Van Horne Prentice Hall.pdf","0","0","1","1");
INSERT INTO books VALUES("32","2012-10-15 13:57:08","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","27","Ciencia de la Administracion - Jorge Alfredo Hermida - Ediciones Contabilidad Moderna.pdf","0","0","1","1");
INSERT INTO books VALUES("33","2012-10-15 13:57:09","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","28","Administracion de organizaciones (En el umbral del tercer milenio)- Ricardo Solana - Ediciones Interoceanicas S.A. .pdf","0","0","1","1");
INSERT INTO books VALUES("34","2012-10-15 13:57:09","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","29","Teoria Microeconomica . Ed 3 - James M Henderson Richad E Quandt - Edit Ariel.pdf","0","0","1","1");
INSERT INTO books VALUES("35","2012-10-15 13:57:10","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","30","Teoria y Politica Macroeconomica - William H Branson - .pdf","0","0","1","1");
INSERT INTO books VALUES("36","2012-10-15 13:57:11","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","31","Principio de Economia - Richard G Lipsey Colin Harbury - Vicens Vives.pdf","0","0","1","1");
INSERT INTO books VALUES("37","2012-10-15 13:57:11","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","32","Administracion - Harlod Koontz - 1998.pdf","0","0","1","1");
INSERT INTO books VALUES("38","2012-10-15 13:57:12","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","33","Microeconomia - Tercera edicion - Miller , Meiners.pdf","0","0","1","1");
INSERT INTO books VALUES("39","2012-10-15 13:57:13","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","34","Teoria MacroEconomica - Allen.pdf","0","0","1","1");
INSERT INTO books VALUES("40","2012-10-15 13:57:13","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","35","Microeconomia y conducta - Robert H Frank - MacGraw-Hill 1992.pdf","0","0","1","1");
INSERT INTO books VALUES("41","2012-10-15 13:57:14","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","36","Microeconomia moderna. A. Koutsoyiannis .pdf","0","0","1","1");
INSERT INTO books VALUES("42","2012-10-15 13:57:15","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","37","contabilidad basica.pdf","0","0","1","1");
INSERT INTO books VALUES("43","2012-10-15 13:57:15","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","39","TRATADOS DE CONTABILIDAD INTERMEDIA Y SUPERIOR-MARIO BIONDI.pdf","0","0","1","1");
INSERT INTO books VALUES("44","2012-10-15 13:57:16","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","40","Estrategia del Cambio - Robert Gilbreath - MacGraw-Hill.pdf","0","0","1","1");
INSERT INTO books VALUES("45","2012-10-15 13:57:17","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","43","Microeconomia - Quirk.pdf","0","0","1","1");
INSERT INTO books VALUES("46","2012-10-15 13:57:17","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","84","derecho privado I.pdf","0","0","1","1");
INSERT INTO books VALUES("47","2012-10-15 13:57:18","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","98","tractores y motores agricolas.pdf","0","0","1","1");
INSERT INTO books VALUES("48","2012-10-15 13:59:30","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","122","Economia Principios y aplicaciones-Mochon y Beker(arreglar).pdf","0","0","1","2");
INSERT INTO books VALUES("49","2012-10-15 13:59:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","129","Comportamiento organizacional-3raEd-Robbins-Hispanoamericana.pdf","0","0","1","2");
INSERT INTO books VALUES("50","2012-10-15 13:59:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","130","Introduccion a la economia-Lipsey-Tugores-Vicens vives.pdf","0","0","1","2");
INSERT INTO books VALUES("51","2012-10-15 13:59:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","131","termodinamica, notas de curso 1995 ing.electrica.pdf","0","0","1","2");
INSERT INTO books VALUES("52","2012-10-15 13:59:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","132","calculo con geometria analitica-2daEd-Swokowski-Editorial Iberoamericana.pdf","0","0","1","2");
INSERT INTO books VALUES("53","2012-10-15 13:59:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","133","Foundations for financial economics-Huang Litzenberger-North Hollang.pdf","0","0","1","2");
INSERT INTO books VALUES("54","2012-10-15 13:59:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","133","Introducctions Capital Market.pdf","0","0","1","2");
INSERT INTO books VALUES("55","2012-10-15 13:59:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","134","Introduccion a los microcontroladores-Vazquez-McGrawHill.pdf","0","0","1","2");
INSERT INTO books VALUES("56","2012-10-15 13:59:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","136","Tratado de derecho civil-Tomo1-Boda-Perrot.pdf","0","0","1","2");
INSERT INTO books VALUES("57","2012-10-15 13:59:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","137","Estructuras empresarias dinamicas-Serra Kastika-Ediciones Macchi.pdf","0","0","1","2");
INSERT INTO books VALUES("58","2012-10-15 13:59:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","138","Administracion y estrategia-4taE.-Hermida-Serra-Kastika-Macchi.pdf","0","0","1","2");
INSERT INTO books VALUES("59","2012-10-15 13:59:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","139","Procedimiento tributario-Celdeiro-NuevaTecnica.pdf","0","0","1","2");
INSERT INTO books VALUES("60","2012-10-15 13:59:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","140","Introduccion a las teorias modernas del crecimiento economico-Aguil Mendue§a-Antoni Bosh.pdf","0","0","1","2");
INSERT INTO books VALUES("61","2012-10-15 13:59:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","141","Economia-14taEd-Samuelson-Nordhaus-McGrawHill.pdf","0","0","1","2");
INSERT INTO books VALUES("62","2012-10-15 13:59:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","142","Lecciones de seguros-Halperin-Depalma.pdf","0","0","1","2");
INSERT INTO books VALUES("63","2012-10-15 13:59:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","143","Analisis monetario y cambiario en el sistema financiero argentino-Apreda-Club de estudio.pdf","0","0","1","2");
INSERT INTO books VALUES("64","2012-10-15 13:59:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","144","Los indicadores economicos-2daEd-Rodriguez Pereyra-Ediciones Macchi.pdf","0","0","1","2");
INSERT INTO books VALUES("65","2012-10-15 13:59:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","145","Instrumental para el estudio de la economia argentina-4taEd-Editorial Tesis.pdf","0","0","1","2");
INSERT INTO books VALUES("66","2012-10-15 13:59:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","146","Espa§a invertebrada-Ortega y Gaset.pdf","0","0","1","2");
INSERT INTO books VALUES("67","2012-10-15 13:59:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","147","Instituciones de derecho cambiario-Tomo1-Gomez Leo-Ediciones Depalma.pdf","0","0","1","2");
INSERT INTO books VALUES("68","2012-10-15 13:59:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","148","Fed¢n de Plat¢n-Edit universitaria.pdf","0","0","1","2");
INSERT INTO books VALUES("69","2012-10-15 13:59:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","149","Electronica II-2da Ed-Oliva Sica.pdf","0","0","1","2");
INSERT INTO books VALUES("70","2012-10-15 13:59:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","150","Impuesto a las ganancias-Mart°n-Editorial Tributaria.pdf","0","0","1","2");
INSERT INTO books VALUES("71","2012-10-15 13:59:46","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","200","Hacienda publica-5ta EdMusgrave Musgrave-McGrawHill.pdf","0","0","1","2");
INSERT INTO books VALUES("72","2012-10-15 13:59:46","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","201","Iniciacion en el estudio del nuevo regimen legal de concursos y quiebras-Vitolo-adhoc .pdf","0","0","1","2");
INSERT INTO books VALUES("73","2012-10-15 13:59:47","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","202","Derecho del trabajo y de la seguridad social-Giolardini-Raigambre.pdf","0","0","1","2");
INSERT INTO books VALUES("74","2012-10-15 13:59:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","203","Microeconomia intermedia-3raEd-Varian-Antoni Bosch.pdf","0","0","1","2");
INSERT INTO books VALUES("75","2012-10-15 13:59:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","211","Manual de derecho Romano-3ra Ed.-Arguello-Astrea.pdf","0","0","1","2");
INSERT INTO books VALUES("76","2012-10-15 13:59:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","212","Tratado de derecho civil Parte General-Tomo I-Llambias-Perrot.pdf","0","0","1","2");
INSERT INTO books VALUES("77","2012-10-15 13:59:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","212","Tratado de derecho civil Parte General-Tomo II-Llambias-Perrot.pdf","0","0","1","2");
INSERT INTO books VALUES("78","2012-10-15 13:59:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","213","Derecho Politico-TomoI-Fayt-5taEd-Ghersi.pdf","0","0","1","2");
INSERT INTO books VALUES("79","2012-10-15 13:59:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","214","Derecho politico-TomoII-Fayt-10maEd-Editorial Depalma.pdf","0","0","1","2");
INSERT INTO books VALUES("80","2012-10-15 13:59:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","215","Historia del derecho romano-Aikh.pdf","0","0","1","2");
INSERT INTO books VALUES("81","2012-10-15 13:59:52","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","216","Manual de derecho comercial Parte general- Etcheverry-Astrea.pdf","0","0","1","2");
INSERT INTO books VALUES("82","2012-10-15 13:59:53","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","217","Introduccion al analisis del erecho-2daEd-Nino-Astrea.pdf","0","0","1","2");
INSERT INTO books VALUES("83","2012-10-15 13:59:53","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","218","El Principe-Maquiavelo.pdf","0","0","1","2");
INSERT INTO books VALUES("84","2012-10-15 13:59:54","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","219","Que es la justicia-Kelsen-Planeta Agostini.pdf","0","0","1","2");
INSERT INTO books VALUES("85","2012-10-15 13:59:55","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","219","Que es la justicia-Kelsen.pdf","0","0","1","2");
INSERT INTO books VALUES("86","2012-10-15 13:59:55","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","219","Teoria general del derecho y del estado-2daEd-Maynez-Editorial universitaria.pdf","0","0","1","2");
INSERT INTO books VALUES("87","2012-10-15 13:59:56","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","219","Teoria general del derecho y del estado-Kelsen-Editorial universitaria.pdf","0","0","1","2");
INSERT INTO books VALUES("88","2012-10-15 13:59:57","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","220","La teoria pura del derecho-2daEd-Kelsen-Losada.pdf","0","0","1","2");
INSERT INTO books VALUES("89","2012-10-15 13:59:57","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","220","Teoria pura del derecho-Vernengo.pdf","0","0","1","2");
INSERT INTO books VALUES("90","2012-10-15 13:59:58","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","220","Teoria pura del erecho-Kelsen-Editorial Universitaria.pdf","0","0","1","2");
INSERT INTO books VALUES("91","2012-10-15 14:01:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","221","Diccionario de ciencias juridicas politicas y sociales.pdf","0","0","1","3");
INSERT INTO books VALUES("92","2012-10-15 14:01:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","222","Tratado de erecho civil parte general tomo II-Llambias-Perrot.pdf","0","0","1","3");
INSERT INTO books VALUES("93","2012-10-15 14:01:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","223","La Constitucion reformada-Dromi Menem.pdf","0","0","1","3");
INSERT INTO books VALUES("94","2012-10-15 14:01:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","224","Introduccion al derecho-2daEd-Aftalion Vilanova-Perrot.pdf","0","0","1","3");
INSERT INTO books VALUES("95","2012-10-15 14:01:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","225","Derecho Romano-2da edici¢n-Luis Alberto Guzman y L.RodolgoArguello.pdf","0","0","1","3");
INSERT INTO books VALUES("96","2012-10-15 14:01:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","227","Lecciones de Derecho Romano-Ambrosioni y Tabax-odolfo Depalma.pdf","0","0","1","3");
INSERT INTO books VALUES("97","2012-10-15 14:01:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","228","Derecho Comercial Argentino-Fontanarrosa-Zavalia.pdf","0","0","1","3");
INSERT INTO books VALUES("98","2012-10-15 14:01:29","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","230","Manual de Derecho Penal - Zaffaroni - 6ta Edici¢n.pdf","0","0","1","3");
INSERT INTO books VALUES("99","2012-10-15 14:01:29","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","235","Compiladores, Principios, tÇcnicas y herramientas-Aho,Sethi.pdf","0","0","1","3");
INSERT INTO books VALUES("100","2012-10-15 14:01:30","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","236","Derecho de Obligaciones, civiles y comerciales-Aletrini,Ameal y Cabana.pdf","0","0","1","3");
INSERT INTO books VALUES("101","2012-10-15 14:01:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","238","An†lisis Microecon¢mico-3ra Edicion-Varian.pdf","0","0","1","3");
INSERT INTO books VALUES("102","2012-10-15 14:01:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","239","Normas Contables Profesionales-Valleta Ediciones.pdf","0","0","1","3");
INSERT INTO books VALUES("103","2012-10-15 14:01:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","240","Derecho Publico-Garc°a-.pdf","0","0","1","3");
INSERT INTO books VALUES("104","2012-10-15 14:01:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","241","Derecho Administrativo-6taEdici¢n-Dromi.pdf","0","0","1","3");
INSERT INTO books VALUES("105","2012-10-15 14:01:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","241","Elementos de Derecho Constitucional-Sagues-TOMO II.pdf","0","0","1","3");
INSERT INTO books VALUES("106","2012-10-15 14:01:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","243","Manual de la constitucion reformada Tomo II - German J. Bidart Campos - Sociedad anonima editora.pdf","0","0","1","3");
INSERT INTO books VALUES("107","2012-10-15 14:01:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","244","El concepto del derecho - Segunda edicion - Hart - Editorial abeledo perrot.pdf","0","0","1","3");
INSERT INTO books VALUES("108","2012-10-15 14:01:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","245","Contratos civiles y comerciales Tomo II - Parte especial - 2da ediciona actualizada y aumentada - Roque Fortunato Garrido - Jorge Alberto Zago - Editorial Universal.pdf","0","0","1","3");
INSERT INTO books VALUES("109","2012-10-15 14:01:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","246","Contratos civiles y comerciales, Parte general - Roque fortunato Garrido, Jorge Alberto Zago - Editorial Universal.pdf","0","0","1","3");
INSERT INTO books VALUES("110","2012-10-15 14:01:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","247","Teoria Microecon¢mica- Ferguson y Gould.pdf","0","0","1","3");
INSERT INTO books VALUES("111","2012-10-15 14:01:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","248","Impuesto a las ganancias-Gebhardt y Malvitano-Macchi Ediciones.pdf","0","0","1","3");
INSERT INTO books VALUES("112","2012-10-15 14:01:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","249","Regimen Jur°dico de la Gesti¢n del Control en la hacienda P£blica-Atchabahian-Depalma.pdf","0","0","1","3");
INSERT INTO books VALUES("113","2012-10-15 14:01:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","250","Direcci¢n y Administraci¢n de la Producci¢n y de las Operaciones-6ta ed-Chase y Aquilano-McGraw-hill.pdf","0","0","1","3");
INSERT INTO books VALUES("114","2012-10-15 14:01:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","253","Operating system concepts - 4th edition - Abraham Silberscharz, Peter B. Galvin - AddisonWesley Publishing Company.pdf","0","0","1","3");
INSERT INTO books VALUES("115","2012-10-15 14:01:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","254","introduccion a la algebra lineal-howard anton","0","0","1","3");
INSERT INTO books VALUES("116","2012-10-15 14:01:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","255","derecho penal parte especial tomoI.pdf","0","0","1","3");
INSERT INTO books VALUES("117","2012-10-15 14:01:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","256","Derecho penal. parte general - Enrique Bacigalupo - Editorial Hammurabi S.R.L.pdf","0","0","1","3");
INSERT INTO books VALUES("118","2012-10-15 14:01:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","257","Teoria general de la obligacion - Seccion primera .pdf","0","0","1","3");
INSERT INTO books VALUES("119","2012-10-15 14:01:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","257","Regimen de Concursos y Quiebras-Roullion.pdf","0","0","1","3");
INSERT INTO books VALUES("120","2012-10-15 14:01:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","259","Botonica-2da ed-Jensen y Salisbury.pdf","0","0","1","3");
INSERT INTO books VALUES("121","2012-10-15 14:01:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","260","Derecho penal parte especial - tomo 2 - 6¯ edicion actualizada y ampliada - Carlos Creus.pdf","0","0","1","3");
INSERT INTO books VALUES("122","2012-10-15 14:01:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","263","Los Derechos en Serio-Dworkin-Planeta Agostini.pdf","0","0","1","3");
INSERT INTO books VALUES("123","2012-10-15 14:01:46","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","264","Derecho penal argentino IV - Sebastian Soler - Tipografica editora argentina.pdf","0","0","1","3");
INSERT INTO books VALUES("124","2012-10-15 14:01:47","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","265","Biologia d las plantas - Parte I - Peter Raven, Ray Evert, Susan Eichhorn - Editorial RevertÇ .pdf","0","0","1","3");
INSERT INTO books VALUES("125","2012-10-15 14:01:47","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","266","Biologia d las plantas - Parte II - Peter Raven, Ray Evert, Susan Eichhorn - Editorial RevertÇ .pdf","0","0","1","3");
INSERT INTO books VALUES("126","2012-10-15 14:01:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","267","Bases para un sistema de informacion contable - Tomo I - Hector Ostengo - Ediciones El Graduado.pdf","0","0","1","3");
INSERT INTO books VALUES("127","2012-10-15 14:01:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","268","Contabilidad introductoria y basica - Teoria y casos practicos - Segunda edicion - Isaac Aizik Senderovich - Ediciones Macchi.pdf","0","0","1","3");
INSERT INTO books VALUES("128","2012-10-15 14:01:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","269","Biologia celular y molecular - 20¯ edicion - Eduardo D.P. De Robertis - Libreria editorial El Ateneo .pdf","0","0","1","3");
INSERT INTO books VALUES("129","2012-10-15 14:04:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","270","Lecciones de derecho constitucional - Humberto Quiroga Lavie - Ediciones Depalma.pdf","0","0","1","4");
INSERT INTO books VALUES("130","2012-10-15 14:04:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","272","Contratos comerciales modernos - 2¯ edicion actualizada y ampliada - Juan M. Farina - Editorial Astrea.pdf","0","0","1","4");
INSERT INTO books VALUES("131","2012-10-15 14:04:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","273","Ley de contrato de trabajo - Dra Marianela Chrinian - 1997 - Editorial Zavalia.pdf","0","0","1","4");
INSERT INTO books VALUES("132","2012-10-15 14:04:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","274","Derecho del trabajo y de la seguridad social - Tomo I - 7¯ edicion actualizada y ampliada - Antonio Vazquez Vialard - Editorial Astrea  .pdf","0","0","1","4");
INSERT INTO books VALUES("133","2012-10-15 14:04:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","275","Derecho del trabajo y de la seguridad social Tomo 2 - 7ma edicion actualizada y ampliada - Antonio Vazquez Vialard - Editorial Astrea.pdf","0","0","1","4");
INSERT INTO books VALUES("134","2012-10-15 14:04:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","277","Codigo procesal penal - Ley 11.922 - 2da edicion actualizada - Scotti editora.pdf","0","0","1","4");
INSERT INTO books VALUES("135","2012-10-15 14:04:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","278","Derecho procesal penal - Tomo I - Jorge A. Claria Olmedo.pdf","0","0","1","4");
INSERT INTO books VALUES("136","2012-10-15 14:04:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","280","Introduccion al estudio del derecho procesal - Primera Parte -  Adolfo Alvarado Velloso .pdf","0","0","1","4");
INSERT INTO books VALUES("137","2012-10-15 14:04:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","281","Econometria Basica - Tercera Edicion - Damodar N. Gujarati.pdf","0","0","1","4");
INSERT INTO books VALUES("138","2012-10-15 14:04:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","282","Derecho comercial y economico - Parte General - Raul Anibal Etcheverry - Editorial Astrea.pdf","0","0","1","4");
INSERT INTO books VALUES("139","2012-10-15 14:04:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","283","Derecho Procesal Penal - Tomo II - Olmedo - A§o 1998.pdf","0","0","1","4");
INSERT INTO books VALUES("140","2012-10-15 14:04:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","284","Teoria General de la responsabilidad civil - Novena edicion ampliada y actualizada - Jorge Bustamante Alsina - Abeledo Perrot.pdf","0","0","1","4");
INSERT INTO books VALUES("141","2012-10-15 14:04:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","285","Derecho societario - Sociedades comerciales, civil y cooperativa - Efrain Hugo Richard, Orlando Manuel Mui§o - Editorial Astrea.pdf","0","0","1","4");
INSERT INTO books VALUES("142","2012-10-15 14:04:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","286","Derecho Administrativo - Tomo II - Juan Carlos Cassagne - Octava Edicion Actualizada - LexisNexis.pdf","0","0","1","4");
INSERT INTO books VALUES("143","2012-10-15 14:04:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","287","Introduccion al conocimiento cientifico - Ricardo A. Guibourg - Editorial universal.pdf","0","0","1","4");
INSERT INTO books VALUES("144","2012-10-15 14:04:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","288","Quimica - Sexta Edicion - Raymond Chang .pdf","0","0","1","4");
INSERT INTO books VALUES("145","2012-10-15 14:04:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","289","Tratado de derecho administrativo - Tomo IV - Miguel S. Marienhoff - Abeledo Perrot.pdf","0","0","1","4");
INSERT INTO books VALUES("146","2012-10-15 14:04:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","290","Derecho de da§os - (La prueba en el proceso de da§os) - Tercera Parte  - Jorge Mosset Iturraspe, Norberto J. Novellino - Ediciones La Rocca.pdf","0","0","1","4");
INSERT INTO books VALUES("147","2012-10-15 14:04:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","291","Logica, Proposicion y norma - Echave, Urquijo, Guibourg.pdf","0","0","1","4");
INSERT INTO books VALUES("148","2012-10-15 14:04:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","292","Manual de derecho procesal civil - decimo octava edicion actualizada - Lino Enrique Palacio - LexisNexis.pdf","0","0","1","4");
INSERT INTO books VALUES("149","2012-10-15 14:04:47","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","293","Tratado de derecho Municipal - Tomo I Segunda Edicion Actualizada - Horacio Rosatti.pdf","0","0","1","4");
INSERT INTO books VALUES("150","2012-10-15 14:04:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","295","Probability and Random Processes for Electrical Engineering - Second Edition - Alberto Leon Garcia.pdf","0","0","1","4");
INSERT INTO books VALUES("151","2012-10-15 14:04:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","296","Tratado de derecho administrativo - Tomo V - Segunda Edicion Actualizada - Miguel S. Marienhoff.pdf","0","0","1","4");
INSERT INTO books VALUES("152","2012-10-15 14:04:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","297","Autocad Curso de iniciacion - 14.pdf","0","0","1","4");
INSERT INTO books VALUES("153","2012-10-15 14:04:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","298","Introduccion  a la metodologia de las ciencias juridicas y sociales - Carlos E. Alchourron, Eugenio Bulygin.pdf","0","0","1","4");
INSERT INTO books VALUES("154","2012-10-15 14:04:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","298","Tratado de derecho administrativo - Tomo IV - Tercera edicion - Miguel S. Marienhoff.pdf","0","0","1","4");
INSERT INTO books VALUES("155","2012-10-15 14:04:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","299","Derecho Procesal Penal - Tomo III - Jorge A. Claria Olmedo - Rubinzal - Culzoni Editores.pdf","0","0","1","4");
INSERT INTO books VALUES("156","2012-10-15 14:04:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","300","Diccionario de derecho politico.pdf","0","0","1","4");
INSERT INTO books VALUES("157","2012-10-15 14:04:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","301","Concursos y quiebras - 6ta edicion actualizada y ampliada - Santiago C. Fassi, Marcelo Gebhardt.pdf","0","0","1","4");
INSERT INTO books VALUES("158","2012-10-15 14:04:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","302","Principios de bioquimica - Cuarta edicion - Lehninger - Ediciones omega.pdf","0","0","1","4");
INSERT INTO books VALUES("159","2012-10-15 14:04:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","303","Derecho de la navegacion - Comercio exterior I  - Jose domingo Ray - Abeledo Perrot.pdf","0","0","1","4");
INSERT INTO books VALUES("160","2012-10-15 14:04:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","304","C¢digo Procesal Penal de la Pcia de Bs As-Pedro J.Bertolino-octava Ed.pdf","0","0","1","4");
INSERT INTO books VALUES("161","2012-10-15 14:04:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","305","Instituciones de Derecho Concursal-Rivera-2da Ed-Tomo I.pdf","0","0","1","4");
INSERT INTO books VALUES("162","2012-10-15 14:04:52","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","306","Instituciones de Derecho Concursal-Rivera-Tomo II-2da Edicion.pdf","0","0","1","4");
INSERT INTO books VALUES("163","2012-10-15 14:04:52","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","308","Derecho Administrativo-Cassagne-Tomo I-8va Edicion.pdf","0","0","1","4");
INSERT INTO books VALUES("164","2012-10-15 14:04:53","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","309","Introduccio¢n al Estudio del Derecho Procesal-Segunda parte-Velloso.pdf","0","0","1","4");
INSERT INTO books VALUES("165","2012-10-15 14:04:54","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","310","Contratos civiles, comerciales, de consumo-Teor°a general-Alterini.pdf","0","0","1","4");
INSERT INTO books VALUES("166","2012-10-15 14:04:55","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","311","El orden Politico, Principos y cuestiones de Derecho Politico-Amadeo y Ventura.pdf","0","0","1","4");
INSERT INTO books VALUES("167","2012-10-15 14:04:55","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","312","Manual de Derecho Ambiental, Argentino y Latinoamericano-Franza .pdf","0","0","1","4");
INSERT INTO books VALUES("168","2012-10-15 14:04:55","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","313","Derecho Publico-unidad I.pdf","0","0","1","4");
INSERT INTO books VALUES("169","2012-10-15 14:04:56","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","314","Parciales.pdf","0","0","1","4");
INSERT INTO books VALUES("170","2012-10-15 14:04:56","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","314","Resumen de Derecho Privado III.pdf","0","0","1","4");
INSERT INTO books VALUES("171","2012-10-15 14:04:56","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","315","Calculo con Geometr°a Anal°tica-Purcxell y Varberg.pdf","0","0","1","4");
INSERT INTO books VALUES("172","2012-10-15 14:06:15","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","316","Ley 12.085.pdf","0","0","1","5");
INSERT INTO books VALUES("173","2012-10-15 14:06:16","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","317","La ciencia - Su metodo y filosofia - Mario Bunge - Editorial Sudamericana.pdf","0","0","1","5");
INSERT INTO books VALUES("174","2012-10-15 14:06:17","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","318","Logica e introduccion a la filosofia - Vicente Fatone.pdf","0","0","1","5");
INSERT INTO books VALUES("175","2012-10-15 14:06:17","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","319","Derecho penal parte especial - Tomo I - Edgardo Alberto Donna.pdf","0","0","1","5");
INSERT INTO books VALUES("176","2012-10-15 14:06:18","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","320","Manual de derecho de familia - 6ta edicion actualizada - Gustavo A Bossert, Eduardo A. Zannoni.pdf","0","0","1","5");
INSERT INTO books VALUES("177","2012-10-15 14:06:19","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","321","Manual de la constitucion reformada - Tomo III - German J. Bidart Campos.pdf","0","0","1","5");
INSERT INTO books VALUES("178","2012-10-15 14:06:19","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","322","Derecho de familia - Tomo I - Derecho civil - Eduardo A. Zannoni.pdf","0","0","1","5");
INSERT INTO books VALUES("179","2012-10-15 14:06:20","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","323","Finanzas publicas y derecho tributario - tercera edicion - Dino Jarach - Abeledo Perrot.pdf","0","0","1","5");
INSERT INTO books VALUES("180","2012-10-15 14:06:21","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","324","Manual de Derecho de las Sucesiones - Eduardo A Zannoni 4ta Ed - 1999.pdf","0","0","1","5");
INSERT INTO books VALUES("181","2012-10-15 14:06:21","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","325","Contratos Civiles y comerciales - Parte general y Especial - Guia de Estudio.pdf","0","0","1","5");
INSERT INTO books VALUES("182","2012-10-15 14:06:22","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","326","Derecho Internacional Publico - 3ra Ed - Bohdant Halajczuk - 1999.pdf","0","0","1","5");
INSERT INTO books VALUES("183","2012-10-15 14:06:23","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","327","Derecho Financiero - Tomo 1- 5ta Ed - Carlos M Giuliani - 1993.pdf","0","0","1","5");
INSERT INTO books VALUES("184","2012-10-15 14:06:23","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","328","El Sistema De Inforrmacion Contable - Hector C Ostengo - 1998.pdf","0","0","1","5");
INSERT INTO books VALUES("185","2012-10-15 14:06:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","329","Manual de Derecho Penal - Parte Especial - Ricardo C Nu§es - 1998.pdf","0","0","1","5");
INSERT INTO books VALUES("186","2012-10-15 14:06:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","330","Regimen Penal Tributario Argentino - 2da Ed - Villegas - 1998.pdf","0","0","1","5");
INSERT INTO books VALUES("187","2012-10-15 14:06:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","331","Procedimiento Tributario y de la Seguridad Social - Carlos M Giuliani Fonrouge - 7ma Ed - 1999.pdf","0","0","1","5");
INSERT INTO books VALUES("188","2012-10-15 14:06:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","332","Curso de Finanzas derecho financiero y tributario - 9na ed Hector B Villegas - 1999.pdf","0","0","1","5");
INSERT INTO books VALUES("189","2012-10-15 14:06:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","333","RÇgimen de Procedimientos Administrativos, Ley 19.549-6ta Ed.pdf","0","0","1","5");
INSERT INTO books VALUES("190","2012-10-15 14:06:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","334","Derecho de las Sociedades Comerciales-Villegas.pdf","0","0","1","5");
INSERT INTO books VALUES("191","2012-10-15 14:06:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","334","Zinss Microbiologia-18va Ed.pdf","0","0","1","5");
INSERT INTO books VALUES("192","2012-10-15 14:06:29","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","335","Curso de Derecho Societario-Nissen .pdf","0","0","1","5");
INSERT INTO books VALUES("193","2012-10-15 14:06:29","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","337","Sociedad Nocion, Bolilla 1-.pdf","0","0","1","5");
INSERT INTO books VALUES("194","2012-10-15 14:06:30","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","338","Introduccion al Derecho-Bobbio.pdf","0","0","1","5");
INSERT INTO books VALUES("195","2012-10-15 14:06:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","339","Curso de Derecho de la Navegaci¢n-Montiel.pdf","0","0","1","5");
INSERT INTO books VALUES("196","2012-10-15 14:06:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","340","Nuevo Manual de Derecho Cambiario-G¢mez Leo.pdf","0","0","1","5");
INSERT INTO books VALUES("197","2012-10-15 14:06:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","342","Elementos de Derecho Constitucional-Sagues-Tomo I.pdf","0","0","1","5");
INSERT INTO books VALUES("198","2012-10-15 14:06:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","344","Derecho Tributario General-Martin Jose Maria.pdf","0","0","1","5");
INSERT INTO books VALUES("199","2012-10-15 14:06:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","345","Inst.Derecho Privado II-.pdf","0","0","1","5");
INSERT INTO books VALUES("200","2012-10-15 14:06:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","346","Resoluciones TÇcnicas Vigentes 4 a 15-.pdf","0","0","1","5");
INSERT INTO books VALUES("201","2012-10-15 14:06:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","347","Histologia Texto y Atlas Color -3ra Ed-Rooss, Romrell y kaye.pdf","0","0","1","5");
INSERT INTO books VALUES("202","2012-10-15 14:06:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","349","Derecho Penal Parte Especial, Tomo III-Donna.pdf","0","0","1","5");
INSERT INTO books VALUES("203","2012-10-15 14:06:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","350","Bioqu°mica, Las bases moleculares de la estructura y funci¢n celular-Lehninger-2da Ed.pdf","0","0","1","5");
INSERT INTO books VALUES("204","2012-10-15 14:06:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","351","Derecho Internacional Privado-Balestra-3ra Ed.pdf","0","0","1","5");
INSERT INTO books VALUES("205","2012-10-15 14:06:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","352","El Comportamiento de los Costos y La gesti¢n de la Empresa-Bottaro, Yard°n y Jauregui-A§o 2001.pdf","0","0","1","5");
INSERT INTO books VALUES("206","2012-10-15 14:06:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","353","Resumen Administrativo I-.pdf","0","0","1","5");
INSERT INTO books VALUES("207","2012-10-15 14:06:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","354","Introducci¢n al Derecho Internacional Privado-Rapallini.pdf","0","0","1","5");
INSERT INTO books VALUES("208","2012-10-15 14:06:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","355","Resumen Derecho Privado I-Contador.pdf","0","0","1","5");
INSERT INTO books VALUES("209","2012-10-15 14:06:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","356","Derecho Internacional P£blico Tomo I-Moncayo, Vinvesa y Poss.pdf","0","0","1","5");
INSERT INTO books VALUES("210","2012-10-15 14:06:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","357","Derecho Internacional P£blico-2da Ed-Barboza.pdf","0","0","1","5");
INSERT INTO books VALUES("211","2012-10-15 14:06:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","358","Derecho Penal Parte Especial-Tomo II -Donna.pdf","0","0","1","5");
INSERT INTO books VALUES("212","2012-10-15 14:06:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","359","Derecho de la Navegaci¢n-Lebrero.pdf","0","0","1","5");
INSERT INTO books VALUES("213","2012-10-15 14:09:23","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","360","Manual de Derecho Del Trabajo y de la Seguridad Social-Giorgi.pdf","0","0","1","6");
INSERT INTO books VALUES("214","2012-10-15 14:09:23","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","361","Compendio Jur°dico TÇcnico y Pr†ctico de la Actividad Bancaria-Villegas.pdf","0","0","1","6");
INSERT INTO books VALUES("215","2012-10-15 14:09:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","362","Obligaciones, Civiles y Comerciales-.pdf","0","0","1","6");
INSERT INTO books VALUES("216","2012-10-15 14:09:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","363","Manual de Derecho Aerona£tico-Escalada.pdf","0","0","1","6");
INSERT INTO books VALUES("217","2012-10-15 14:09:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","364","Guia de Derechos Reales de Vidal-TomoII.pdf","0","0","1","6");
INSERT INTO books VALUES("218","2012-10-15 14:09:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","365","Curso de derechos reales - Marina mariani de vidal - Tomo 3.pdf","0","0","1","6");
INSERT INTO books VALUES("219","2012-10-15 14:09:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","367","Manual de Sociedades Civiles y Comerciales-Muguillo.pdf","0","0","1","6");
INSERT INTO books VALUES("220","2012-10-15 14:09:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","369","Curso de Derechos Reales, Tomo I-Vidal.pdf","0","0","1","6");
INSERT INTO books VALUES("221","2012-10-15 14:09:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","370","Manuel de Derecho Sucesorio-Aspiri.pdf","0","0","1","6");
INSERT INTO books VALUES("222","2012-10-15 14:09:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","371","Derecho Penal, Parte Especial, Tomo II-Buompadre.pdf","0","0","1","6");
INSERT INTO books VALUES("223","2012-10-15 14:09:29","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","372","El Incumplimiento de las formas Procesales-Donna-Tomo II.pdf","0","0","1","6");
INSERT INTO books VALUES("224","2012-10-15 14:09:30","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","373","El incumplimiento de las formas procesales - Alberio M Binder - 1er Edei - 2000.pdf","0","0","1","6");
INSERT INTO books VALUES("225","2012-10-15 14:09:30","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","374","Introduccion al derecho procesal - Alberio M Binder - 2da Edi - 1999.pdf","0","0","1","6");
INSERT INTO books VALUES("226","2012-10-15 14:09:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","375","Temas de Responsabilidad Civil - Alterini y Lopez Cabana - 1995.pdf","0","0","1","6");
INSERT INTO books VALUES("227","2012-10-15 14:09:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","375","bis-Guia de Derechos Reales.pdf","0","0","1","6");
INSERT INTO books VALUES("228","2012-10-15 14:09:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","376","Derecho Procesal Penal-Maier-2da Ed.pdf","0","0","1","6");
INSERT INTO books VALUES("229","2012-10-15 14:09:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","377","Ley 21.526 de Entidades Financieras y Leyes Complementarias, Contratos Bancarios y Financieros-Muguillo-Ediciones Fasta.pdf","0","0","1","6");
INSERT INTO books VALUES("230","2012-10-15 14:09:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","378","Gu°a de Estudio Laboral--Grisolia-Edicion.2011-Ed.Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("231","2012-10-15 14:09:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","379","Derecho Procesal Administrativo-Diez-Plus Ultra.pdf","0","0","1","6");
INSERT INTO books VALUES("232","2012-10-15 14:09:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","380","Temas de Derecho de la Navegaci¢n, Derecho Aerona£tico, Derecho Espacial (volumen III)-Arrola-Suerez.pdf","0","0","1","6");
INSERT INTO books VALUES("233","2012-10-15 14:09:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","381","Gu°a de Derecho Administrativo-Font-Editorial Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("234","2012-10-15 14:09:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","382","Gu°a Procesal Civil y Comercial-Font-Editorial Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("235","2012-10-15 14:09:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","383","Gu°a de Familia-Ed.Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("236","2012-10-15 14:09:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","384","Contabilidad I (resumen).pdf","0","0","1","6");
INSERT INTO books VALUES("237","2012-10-15 14:09:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","385","Lecciones de Derecho Internacional Privado-Biocca-Cardenas-basz-Editorial Universidad.pdf","0","0","1","6");
INSERT INTO books VALUES("238","2012-10-15 14:09:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","386","Econom°a Elementos de Micro y Macroeconom°a-Becker y Morcillo-McGraw Hill y Interamericana.pdf","0","0","1","6");
INSERT INTO books VALUES("239","2012-10-15 14:09:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","387","L¢gica, Proposici¢n y Norma-Echave, Urquijo y Norma-Astrea.pdf","0","0","1","6");
INSERT INTO books VALUES("240","2012-10-15 14:09:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","388","Resarcimiento de Da§os-Zavala de Gonzalez-Hammalabi.pdf","0","0","1","6");
INSERT INTO books VALUES("241","2012-10-15 14:09:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","389","Derecho Penal (parte especial)-Buompadre-Mave.pdf","0","0","1","6");
INSERT INTO books VALUES("242","2012-10-15 14:09:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","390","Gu°a  de Estudio Mar°timo-editorial Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("243","2012-10-15 14:09:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","391","Derecho Aeron†utico-Torres NeuquÇn-Editorial Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("244","2012-10-15 14:09:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","392","Resumen de Derecho P£blico.pdf","0","0","1","6");
INSERT INTO books VALUES("245","2012-10-15 14:09:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","393","Curso de Derecho del Trabajo y de la Seguridad Social-Mancini-Astrea.pdf","0","0","1","6");
INSERT INTO books VALUES("246","2012-10-15 14:09:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","394","Internacional P£blico-Editorial Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("247","2012-10-15 14:09:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","395","Gu°a de Estudio Civil Parte General-Font-Editorail Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("248","2012-10-15 14:09:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","395","Gu°a de Estudio Derecho Civil (parte General)-Font-Editorial Estudio.pdf","0","0","1","6");
INSERT INTO books VALUES("249","2012-10-15 14:09:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","396","Resumen de Costos y Decisiones.pdf","0","0","1","6");
INSERT INTO books VALUES("250","2012-10-15 14:09:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","397","Cuestiones Contables Fundamentales-Newton-Ediciones Macchi.pdf","0","0","1","6");
INSERT INTO books VALUES("251","2012-10-15 14:09:46","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","398","Principios de Economia-Mabel Gimenez.pdf","0","0","1","6");
INSERT INTO books VALUES("252","2012-10-15 14:09:46","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","399","microeconomia-pindyck,rubinfeld,becker.pdf","0","0","1","6");
INSERT INTO books VALUES("253","2012-10-15 14:09:47","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","400","resumen de contabilidad publica.pdf","0","0","1","6");
INSERT INTO books VALUES("254","2012-10-15 14:09:47","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","401","Genetica - Septima edicion - Griffiths - Mc Graw Hill.pdf","0","0","1","6");
INSERT INTO books VALUES("255","2012-10-15 14:09:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","402","Sucesiones - Programa de desarrollo de la materia.pdf","0","0","1","6");
INSERT INTO books VALUES("256","2012-10-15 14:09:48","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","403","La quiebra - Carlos gomez rincon, Martin aramendi.pdf","0","0","1","6");
INSERT INTO books VALUES("257","2012-10-15 14:09:49","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","404","Constitucional - UBA - 2003.pdf","0","0","1","6");
INSERT INTO books VALUES("258","2012-10-15 14:09:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","405","Derecho internacional privado - Un nuevo enfoque - Tomo I - Stella Maris Biocca - Lajouane.pdf","0","0","1","6");
INSERT INTO books VALUES("259","2012-10-15 14:09:50","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","406","Resumen administracion I.pdf","0","0","1","6");
INSERT INTO books VALUES("260","2012-10-15 14:09:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","407","Lecciones de derecho de agravio y de los recursos naturales - Catalano.pdf","0","0","1","6");
INSERT INTO books VALUES("261","2012-10-15 14:09:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","408","Derecho internacional privado - Tomo II - Stella Maris Biocca.pdf","0","0","1","6");
INSERT INTO books VALUES("262","2012-10-15 14:10:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","409","Administracion - Octava edicion - Koontz, O\' Donnell, Weihrich.pdf","0","0","1","6");
INSERT INTO books VALUES("263","2012-10-15 14:10:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","410","Codigo procesal Contencioso Administrativo - Provincia de Buenos Aires - Tomas Hutchinson.pdf","0","0","1","6");
INSERT INTO books VALUES("264","2012-10-15 14:10:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","411","Tratado de derecho ambiental - Jorge Atilio Franza.pdf","0","0","1","6");
INSERT INTO books VALUES("265","2012-10-15 14:10:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","412","Manual de Derecho del trabajo y de la Seguridad Social - Sexta edicion actualizada - Julian Arturo Diego - .pdf","0","0","1","6");
INSERT INTO books VALUES("266","2012-10-15 14:10:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","413","Tratado de los contratos - Tomo I - Segunda edicion actualizada - Ricardo Luis Lorenzetti.pdf","0","0","1","6");
INSERT INTO books VALUES("267","2012-10-15 14:10:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","414","Manual de derecho tributario - 2005 - Mario Augusto Saconne.pdf","0","0","1","6");
INSERT INTO books VALUES("268","2012-10-15 14:10:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","415","Penal parte especial - Torres Neuquen.pdf","0","0","1","6");
INSERT INTO books VALUES("269","2012-10-15 14:11:22","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","416","Derecho ambiental - Eduardo A. Pigretti .pdf","0","0","1","7");
INSERT INTO books VALUES("270","2012-10-15 14:11:23","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","417","Resumen de derecho procesal - Carpeta resumen.pdf","0","0","1","7");
INSERT INTO books VALUES("271","2012-10-15 14:11:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","418","Revista de derecho penal .pdf","0","0","1","7");
INSERT INTO books VALUES("272","2012-10-15 14:11:24","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","419","Elementos del derecho civil - parte gerenal - Santos Cifuentes .pdf","0","0","1","7");
INSERT INTO books VALUES("273","2012-10-15 14:11:25","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","419","Mecanica de Materiales - 2da Edi - Ferdinand P Beer - 1999.pdf","0","0","1","7");
INSERT INTO books VALUES("274","2012-10-15 14:11:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","420","Intituciones de Derecho Civil - Parte General tomo I - Julio Cesar Rivera  - 3 edi - 1994.pdf","0","0","1","7");
INSERT INTO books VALUES("275","2012-10-15 14:11:26","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","421","Instituciones del derecho civil - parte general - tomo II - Julio Cesar Rivera - LexisNexis Abeledo Perrot .pdf","0","0","1","7");
INSERT INTO books VALUES("276","2012-10-15 14:11:27","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","422","Manual de derecho penal - Parte General - Eugenio Raul Zaffaroni.pdf","0","0","1","7");
INSERT INTO books VALUES("277","2012-10-15 14:11:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","424","Resumen derecho administrativo.pdf","0","0","1","7");
INSERT INTO books VALUES("278","2012-10-15 14:11:28","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","425","Manual de Sociedades Comerciales - Carlos Villegas -.pdf","0","0","1","7");
INSERT INTO books VALUES("279","2012-10-15 14:11:29","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","426","Contabilidad Presente y Futuro - Acu§a Viegas Garcia Chaves - 2005.pdf","0","0","1","7");
INSERT INTO books VALUES("280","2012-10-15 14:11:30","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","427","Derechos Reales - UNS.pdf","0","0","1","7");
INSERT INTO books VALUES("281","2012-10-15 14:11:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","428","Carpeta Da§os.pdf","0","0","1","7");
INSERT INTO books VALUES("282","2012-10-15 14:11:31","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","428","Derecho de da§os - parte I.pdf","0","0","1","7");
INSERT INTO books VALUES("283","2012-10-15 14:11:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","429","Resumenes de Derecho Politico.pdf","0","0","1","7");
INSERT INTO books VALUES("284","2012-10-15 14:11:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","430","Practica del Derecho de familia - Zannoni - 2da edi - 2001.pdf","0","0","1","7");
INSERT INTO books VALUES("285","2012-10-15 14:11:33","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","431","Derecho procesal penal - Tomo II - Parte General - Julio B.J. Maier .pdf","0","0","1","7");
INSERT INTO books VALUES("286","2012-10-15 14:11:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","432","Guia de estudio - Recursos naturales - .pdf","0","0","1","7");
INSERT INTO books VALUES("287","2012-10-15 14:11:34","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","433","Fallos constitucional.pdf","0","0","1","7");
INSERT INTO books VALUES("288","2012-10-15 14:11:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","434","Guia de estudio procesal penal.pdf","0","0","1","7");
INSERT INTO books VALUES("289","2012-10-15 14:11:35","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","435","Guia de estudio concursos y quiebras.pdf","0","0","1","7");
INSERT INTO books VALUES("290","2012-10-15 14:11:36","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","436","Guia de estudio comercial .pdf","0","0","1","7");
INSERT INTO books VALUES("291","2012-10-15 14:11:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","437","Tratado de los contratos - Tomo II - Ricardo Luis Lorenzetti - Segunda edicion actualizada.pdf","0","0","1","7");
INSERT INTO books VALUES("292","2012-10-15 14:11:37","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","438","Tratado de los contratos - Tomo III - Ricardo Luis Lorenzetti.pdf","0","0","1","7");
INSERT INTO books VALUES("293","2012-10-15 14:11:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","439","Obligaciones 1 - instituciones de derecho privado - Pizarro, Vallespino.pdf","0","0","1","7");
INSERT INTO books VALUES("294","2012-10-15 14:11:38","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","440","Fisiologia Animal .pdf","0","0","1","7");
INSERT INTO books VALUES("295","2012-10-15 14:11:39","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","441","Guia de estudio - Sociedades civiles y comerciales - Edicion 2010 .pdf","0","0","1","7");
INSERT INTO books VALUES("296","2012-10-15 14:11:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","443","Obligaciones 2 - instituciones de derecho privado - Pizarro, Vallespino.pdf","0","0","1","7");
INSERT INTO books VALUES("297","2012-10-15 14:11:40","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","444","Obligaciones 3 - Instituciones de derecho privado - Pizarro, Vallespinos.pdf","0","0","1","7");
INSERT INTO books VALUES("298","2012-10-15 14:11:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","445","Derecho Comercial - Jose Alberto Garrone .pdf","0","0","1","7");
INSERT INTO books VALUES("299","2012-10-15 14:11:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","446","microeconomia-michael parkin","0","0","1","7");
INSERT INTO books VALUES("300","2012-10-15 14:11:42","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","448","curso de finanzas, derecho financiero y tributario-villegas","0","0","1","7");
INSERT INTO books VALUES("301","2012-10-15 14:11:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","449","Derecho internacional - Antonio Remiro Brotons.pdf","0","0","1","7");
INSERT INTO books VALUES("302","2012-10-15 14:11:43","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","450","constitucion nacional comentada.pdf","0","0","1","7");
INSERT INTO books VALUES("303","2012-10-15 14:11:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","451","resumen de tributaria .pdf","0","0","1","7");
INSERT INTO books VALUES("304","2012-10-15 14:11:44","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","452","guia de derecho penal parte general.pdf","0","0","1","7");
INSERT INTO books VALUES("305","2012-10-15 14:11:45","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","500","administracion 6ta edicion-Stephen Robbins","0","0","1","7");



DROP TABLE business;

CREATE TABLE `business` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO business VALUES("1","2012-06-14 13:21:41","0000-00-00 00:00:00","2012-10-15 13:49:13","0","0","0","La Casita Azul","12 de Octubre 990","Capoduri Marcos","0","fotocasitaazul@yahoo.com.ar","(0291) 4514665","0.07","0.14","0.09","0.18","0.5","1","0");
INSERT INTO business VALUES("2","2012-06-14 13:21:41","0000-00-00 00:00:00","2012-09-06 20:05:51","0","0","0","Zona Grafica","Gorriti 96","Mamet Veronica","0","fotocasitaazul@yahoo.com.ar","154790753","0","0","0","0","0","0","0");
INSERT INTO business VALUES("3","2012-06-14 13:57:02","0000-00-00 00:00:00","2012-09-06 20:05:53","0","0","0","UTN","14 de Abril","Capoduri Marcos","0","","","0","0","0","0","0","0","0");



DROP TABLE business_anillados;

CREATE TABLE `business_anillados` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `business` int(10) unsigned NOT NULL,
  `anillados` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO business_anillados VALUES("2","2012-09-20 15:23:45","0000-00-00 00:00:00","2012-10-15 13:49:34","0","0","0","0","1","5");



DROP TABLE business_books;

CREATE TABLE `business_books` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `business` int(10) unsigned NOT NULL,
  `books` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO business_books VALUES("5","2012-10-15 13:45:38","0000-00-00 00:00:00","2012-10-15 13:49:25","0","0","0","0","1","1");
INSERT INTO business_books VALUES("6","2012-10-15 13:46:01","0000-00-00 00:00:00","2012-10-15 13:49:26","0","0","0","0","1","2");
INSERT INTO business_books VALUES("7","2012-10-15 13:46:24","0000-00-00 00:00:00","2012-10-15 13:49:27","0","0","0","0","1","3");
INSERT INTO business_books VALUES("8","2012-10-15 13:46:51","0000-00-00 00:00:00","2012-10-15 13:49:29","0","0","0","0","1","4");
INSERT INTO business_books VALUES("9","2012-10-15 13:47:29","0000-00-00 00:00:00","2012-10-15 13:49:30","0","0","0","0","1","5");
INSERT INTO business_books VALUES("10","2012-10-15 13:49:02","0000-00-00 00:00:00","2012-10-15 13:49:31","0","0","0","0","1","6");
INSERT INTO business_books VALUES("11","2012-10-15 13:49:32","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","1","7");



DROP TABLE business_users;

CREATE TABLE `business_users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `users` int(11) DEFAULT NULL,
  `business` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO business_users VALUES("1","2012-07-26 15:02:35","0000-00-00 00:00:00","2012-10-15 13:49:17","0","0","0","0","1","1");
INSERT INTO business_users VALUES("2","2012-09-25 16:27:33","0000-00-00 00:00:00","2012-10-15 13:49:18","0","0","0","0","4","1");
INSERT INTO business_users VALUES("3","2012-09-25 16:27:34","0000-00-00 00:00:00","2012-10-15 13:49:19","0","0","0","0","5","1");



DROP TABLE client;

CREATE TABLE `client` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;




DROP TABLE jobs;

CREATE TABLE `jobs` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  `business` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO jobs VALUES("1","2012-10-09 17:22:14","0000-00-00 00:00:00","2012-10-09 17:23:16","1","0","0","0","2012-10-09","18:22:07","","26","2","1","0","1","1");
INSERT INTO jobs VALUES("2","2012-10-10 15:56:41","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11","17:00:00","Quimica II","0","0","24","0","1","1");
INSERT INTO jobs VALUES("3","2012-10-10 16:01:01","0000-00-00 00:00:00","2012-10-11 15:34:21","1","0","0","0","2012-10-10","17:00:00","01 Mylo Xyloto.pdf","0","1","1","0","1","1");



DROP TABLE jobs_workorders;

CREATE TABLE `jobs_workorders` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `jobs` int(10) NOT NULL,
  `workorders` int(10) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO jobs_workorders VALUES("1","2012-10-09 17:22:15","0000-00-00 00:00:00","2012-10-09 17:23:18","1","0","0","0","1","1");
INSERT INTO jobs_workorders VALUES("2","2012-10-10 15:56:43","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2","2");
INSERT INTO jobs_workorders VALUES("3","2012-10-10 16:01:03","0000-00-00 00:00:00","2012-10-11 15:34:24","1","0","0","0","3","3");
INSERT INTO jobs_workorders VALUES("4","2012-10-10 16:01:04","0000-00-00 00:00:00","2012-10-11 15:34:25","1","0","0","0","3","4");



DROP TABLE ndconfig;

CREATE TABLE `ndconfig` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO ndconfig VALUES("1","0","0","2012-06-05 11:39:02","0000-00-00 00:00:00","2012-09-06 20:06:07","0","BlueSystem","0","6","1","alpha, design propouse only","./info.log","./warning.log","./error.log","2010-01-01 00:00:00","0");



DROP TABLE userlog;

CREATE TABLE `userlog` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  `business` int(10) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO userlog VALUES("1","2012-10-11 15:34:26","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","Modificacion del trabajo","jobs","3","1");



DROP TABLE users;

CREATE TABLE `users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO users VALUES("1","0","0","2012-07-23 19:29:27","0000-00-00 00:00:00","2012-09-10 17:34:57","0","Jorge","Capoduri","root","ˇûªÅ%OXUeˇÇp∆ì[Ô-","ˇˇf@4π˛Ÿa","1987-07-29","jcapoduri@gmail.com","154148270","1","1","0");
INSERT INTO users VALUES("2","0","0","2012-09-04 16:26:24","0000-00-00 00:00:00","2012-09-06 19:43:49","0","Marcos","Capoduri","marcos","ˇù≠ûªk©¿è÷\0Ù)ØSnÅ","ÄãWø(&£.Ä	yêçı","1974-01-05","fotocasitaazul@yahoo.com.ar","154414885","1","1","0");
INSERT INTO users VALUES("3","0","0","2012-09-04 16:27:25","0000-00-00 00:00:00","2012-09-06 19:43:51","0","Veronica Amanda Susana Eugenia Nicefala","Mamet de los Montes Trujillo","Veronica","ˇù≠ûªk©¿è÷\0Ù)ØSnÅ","ÄãWø(&£.Ä	yêçı","1980-01-01","nolose@yahoo.com.ar","","1","1","0");
INSERT INTO users VALUES("4","0","0","2012-09-25 16:26:12","0000-00-00 00:00:00","0000-00-00 00:00:00","0","Cristian","Bransiforte","cbransiforte","ˇù≠ûªk©¿è÷\0Ù)ØSnÅ","ˇˇf@4π˛Ÿa","1980-01-01","","","1","0","0");
INSERT INTO users VALUES("5","0","0","2012-09-25 16:26:41","0000-00-00 00:00:00","0000-00-00 00:00:00","0","Adrian","San Martin","asanmartin","ˇù≠ûªk©¿è÷\0Ù)ØSnÅ","ÄãWø(&£.Ä	yêçı","1980-01-01","","","1","0","0");



DROP TABLE userstamp;

CREATE TABLE `userstamp` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `mtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `user_id` int(11) NOT NULL,
  `deleted` tinyint(1) NOT NULL DEFAULT '0',
  `last_instance` int(10) unsigned NOT NULL,
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  `initstamp` datetime NOT NULL,
  `endstamp` datetime NOT NULL,
  `business` int(10) NOT NULL,
  ```business` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=104 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO userstamp VALUES("1","2012-10-01 17:21:10","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","2012-10-01 17:21:08","2012-10-01 17:22:47","1","0");
INSERT INTO userstamp VALUES("2","2012-10-01 17:22:51","0000-00-00 00:00:00","0000-00-00 00:00:00","0","0","0","0","2012-10-01 17:22:49","2012-10-01 17:33:14","1","0");
INSERT INTO userstamp VALUES("3","2012-10-01 17:43:30","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 17:43:29","2012-10-01 17:44:54","1","0");
INSERT INTO userstamp VALUES("4","2012-10-01 18:31:32","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 18:31:30","2012-10-01 18:51:20","1","0");
INSERT INTO userstamp VALUES("5","2012-10-01 18:53:10","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 18:53:09","2012-10-01 18:55:38","1","0");
INSERT INTO userstamp VALUES("6","2012-10-01 18:55:52","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 18:55:51","2012-10-01 18:57:09","1","0");
INSERT INTO userstamp VALUES("7","2012-10-01 18:57:12","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 18:57:11","2012-10-01 19:00:57","1","0");
INSERT INTO userstamp VALUES("8","2012-10-01 19:01:06","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 19:01:04","2012-10-01 19:02:24","1","0");
INSERT INTO userstamp VALUES("9","2012-10-01 19:02:28","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 19:02:26","2012-10-01 19:07:58","1","0");
INSERT INTO userstamp VALUES("10","2012-10-01 19:08:09","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 19:08:07","2012-10-01 19:09:06","1","0");
INSERT INTO userstamp VALUES("11","2012-10-01 19:09:10","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-01 19:09:08","2012-10-01 19:18:30","1","0");
INSERT INTO userstamp VALUES("12","2012-10-02 02:01:41","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:01:41","2012-10-02 02:03:52","1","0");
INSERT INTO userstamp VALUES("13","2012-10-02 02:03:55","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:03:55","2012-10-02 02:07:07","1","0");
INSERT INTO userstamp VALUES("14","2012-10-02 02:07:10","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:07:09","2012-10-02 02:08:16","1","0");
INSERT INTO userstamp VALUES("15","2012-10-02 02:08:19","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:08:19","2012-10-02 02:10:48","1","0");
INSERT INTO userstamp VALUES("16","2012-10-02 02:10:50","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:10:50","2012-10-02 02:12:39","1","0");
INSERT INTO userstamp VALUES("17","2012-10-02 02:12:42","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:12:41","2012-10-02 02:14:51","1","0");
INSERT INTO userstamp VALUES("18","2012-10-02 02:15:00","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:15:00","2012-10-02 02:18:40","1","0");
INSERT INTO userstamp VALUES("19","2012-10-02 02:18:43","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:18:42","2012-10-02 02:24:32","1","0");
INSERT INTO userstamp VALUES("20","2012-10-02 02:24:37","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:24:37","2012-10-02 02:33:49","1","0");
INSERT INTO userstamp VALUES("21","2012-10-02 02:33:53","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:33:52","2012-10-02 02:34:55","1","0");
INSERT INTO userstamp VALUES("22","2012-10-02 02:37:56","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:37:55","2012-10-02 02:39:27","1","0");
INSERT INTO userstamp VALUES("23","2012-10-02 02:39:47","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:39:46","2012-10-02 02:43:55","1","0");
INSERT INTO userstamp VALUES("24","2012-10-02 02:44:02","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:44:01","2012-10-02 02:47:13","1","0");
INSERT INTO userstamp VALUES("25","2012-10-02 02:47:20","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:47:20","2012-10-02 02:55:40","1","0");
INSERT INTO userstamp VALUES("26","2012-10-02 02:55:43","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 02:55:43","2012-10-02 03:14:51","1","0");
INSERT INTO userstamp VALUES("27","2012-10-02 04:23:51","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 04:23:50","2012-10-02 04:31:15","1","0");
INSERT INTO userstamp VALUES("28","2012-10-02 04:32:49","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 04:32:49","2012-10-02 04:41:28","1","0");
INSERT INTO userstamp VALUES("29","2012-10-02 04:58:48","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 04:58:47","2012-10-02 15:45:35","1","0");
INSERT INTO userstamp VALUES("30","2012-10-02 04:59:07","0000-00-00 00:00:00","0000-00-00 00:00:00","4","0","0","0","2012-09-02 04:59:06","2012-09-02 04:59:13","1","0");
INSERT INTO userstamp VALUES("31","2012-10-02 15:46:05","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-02 15:46:04","2012-10-02 15:50:51","1","0");
INSERT INTO userstamp VALUES("32","2012-10-06 15:17:36","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-06 15:17:39","2012-10-06 15:27:50","1","0");
INSERT INTO userstamp VALUES("33","2012-10-06 15:28:12","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-06 15:28:15","2012-10-06 15:41:19","1","0");
INSERT INTO userstamp VALUES("34","2012-10-06 15:41:32","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-06 15:41:35","2012-10-06 15:43:48","1","0");
INSERT INTO userstamp VALUES("35","2012-10-09 11:09:00","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 11:09:04","2012-10-09 11:18:38","1","0");
INSERT INTO userstamp VALUES("36","2012-10-09 11:18:48","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 11:18:53","2012-10-09 11:22:01","1","0");
INSERT INTO userstamp VALUES("37","2012-10-09 11:22:10","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 11:22:15","2012-10-09 11:26:54","1","0");
INSERT INTO userstamp VALUES("38","2012-10-09 11:26:58","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 11:27:02","2012-10-09 11:29:10","1","0");
INSERT INTO userstamp VALUES("39","2012-10-09 11:29:13","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 11:29:17","2012-10-09 11:30:24","1","0");
INSERT INTO userstamp VALUES("40","2012-10-09 11:30:32","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 11:30:36","2012-10-09 11:44:58","1","0");
INSERT INTO userstamp VALUES("41","2012-10-09 13:15:35","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 13:15:39","2012-10-09 13:34:18","1","0");
INSERT INTO userstamp VALUES("42","2012-10-09 13:34:32","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 13:34:36","2012-10-09 13:49:48","1","0");
INSERT INTO userstamp VALUES("43","2012-10-09 13:49:53","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 13:49:57","2012-10-09 13:53:55","1","0");
INSERT INTO userstamp VALUES("44","2012-10-09 13:53:58","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 13:54:02","2012-10-09 14:00:13","1","0");
INSERT INTO userstamp VALUES("45","2012-10-09 14:00:23","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:00:27","2012-10-09 14:02:36","1","0");
INSERT INTO userstamp VALUES("46","2012-10-09 14:02:42","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:02:46","2012-10-09 14:04:01","1","0");
INSERT INTO userstamp VALUES("47","2012-10-09 14:04:04","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:04:08","2012-10-09 14:11:35","1","0");
INSERT INTO userstamp VALUES("48","2012-10-09 14:12:24","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:12:28","2012-10-09 14:23:06","1","0");
INSERT INTO userstamp VALUES("49","2012-10-09 14:23:17","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:23:21","2012-10-09 14:24:47","1","0");
INSERT INTO userstamp VALUES("50","2012-10-09 14:24:55","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:24:59","2012-10-09 14:28:14","1","0");
INSERT INTO userstamp VALUES("51","2012-10-09 14:28:19","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:28:23","2012-10-09 14:29:33","1","0");
INSERT INTO userstamp VALUES("52","2012-10-09 14:29:41","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:29:45","2012-10-09 14:31:19","1","0");
INSERT INTO userstamp VALUES("53","2012-10-09 14:31:24","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:31:28","2012-10-09 14:32:09","1","0");
INSERT INTO userstamp VALUES("54","2012-10-09 14:32:17","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:32:21","2012-10-09 14:35:25","1","0");
INSERT INTO userstamp VALUES("55","2012-10-09 14:35:29","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:35:33","2012-10-09 14:36:17","1","0");
INSERT INTO userstamp VALUES("56","2012-10-09 14:36:21","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:36:25","2012-10-09 14:37:33","1","0");
INSERT INTO userstamp VALUES("57","2012-10-09 14:37:55","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:37:59","2012-10-09 14:38:45","1","0");
INSERT INTO userstamp VALUES("58","2012-10-09 14:39:28","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:39:32","2012-10-09 14:40:28","1","0");
INSERT INTO userstamp VALUES("59","2012-10-09 14:40:35","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:40:39","2012-10-09 14:41:12","1","0");
INSERT INTO userstamp VALUES("60","2012-10-09 14:41:15","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:41:20","2012-10-09 14:45:49","1","0");
INSERT INTO userstamp VALUES("61","2012-10-09 14:45:57","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:46:01","2012-10-09 14:47:01","1","0");
INSERT INTO userstamp VALUES("62","2012-10-09 14:47:05","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:47:09","2012-10-09 14:47:51","1","0");
INSERT INTO userstamp VALUES("63","2012-10-09 14:47:54","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:47:58","2012-10-09 14:48:44","1","0");
INSERT INTO userstamp VALUES("64","2012-10-09 14:48:47","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:48:51","2012-10-09 14:49:45","1","0");
INSERT INTO userstamp VALUES("65","2012-10-09 14:49:48","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:49:52","2012-10-09 14:52:02","1","0");
INSERT INTO userstamp VALUES("66","2012-10-09 14:52:06","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 14:52:10","2012-10-09 14:53:08","1","0");
INSERT INTO userstamp VALUES("67","2012-10-09 15:00:55","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:00:59","2012-10-09 15:05:29","1","0");
INSERT INTO userstamp VALUES("68","2012-10-09 15:05:32","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:05:36","2012-10-09 15:16:02","1","0");
INSERT INTO userstamp VALUES("69","2012-10-09 15:16:05","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:16:09","2012-10-09 15:17:27","1","0");
INSERT INTO userstamp VALUES("70","2012-10-09 15:17:30","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:17:34","2012-10-09 15:19:50","1","0");
INSERT INTO userstamp VALUES("71","2012-10-09 15:19:55","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:19:59","2012-10-09 15:34:48","1","0");
INSERT INTO userstamp VALUES("72","2012-10-09 15:34:51","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:34:55","2012-10-09 15:43:48","1","0");
INSERT INTO userstamp VALUES("73","2012-10-09 15:43:52","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:43:56","2012-10-09 15:49:49","1","0");
INSERT INTO userstamp VALUES("74","2012-10-09 15:49:52","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 15:49:56","2012-10-09 16:03:52","1","0");
INSERT INTO userstamp VALUES("75","2012-10-09 16:04:02","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 16:04:06","2012-10-09 16:12:23","1","0");
INSERT INTO userstamp VALUES("76","2012-10-09 16:12:34","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 16:12:38","2012-10-09 16:24:52","1","0");
INSERT INTO userstamp VALUES("77","2012-10-09 16:24:59","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 16:25:03","2012-10-09 16:30:31","1","0");
INSERT INTO userstamp VALUES("78","2012-10-09 16:30:36","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 16:30:40","2012-10-09 16:34:20","1","0");
INSERT INTO userstamp VALUES("79","2012-10-09 16:34:24","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 16:34:28","2012-10-09 16:39:53","1","0");
INSERT INTO userstamp VALUES("80","2012-10-09 16:39:57","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 16:40:01","2012-10-09 16:50:22","1","0");
INSERT INTO userstamp VALUES("81","2012-10-09 17:17:19","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 17:17:23","2012-10-09 17:21:42","1","0");
INSERT INTO userstamp VALUES("82","2012-10-09 17:21:49","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-09 17:21:53","2012-10-10 15:53:52","1","0");
INSERT INTO userstamp VALUES("83","2012-10-10 15:54:48","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-10 15:54:53","2012-10-10 16:00:10","1","0");
INSERT INTO userstamp VALUES("84","2012-10-10 16:00:21","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-10 16:00:26","2012-10-10 16:59:54","1","0");
INSERT INTO userstamp VALUES("85","2012-10-10 16:59:59","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-10 17:00:03","2012-10-10 17:06:44","1","0");
INSERT INTO userstamp VALUES("86","2012-10-11 15:04:15","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:04:20","2012-10-11 15:10:35","1","0");
INSERT INTO userstamp VALUES("87","2012-10-11 15:10:43","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:10:49","2012-10-11 15:11:36","1","0");
INSERT INTO userstamp VALUES("88","2012-10-11 15:11:40","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:11:45","2012-10-11 15:21:16","1","0");
INSERT INTO userstamp VALUES("89","2012-10-11 15:21:31","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:21:36","2012-10-11 15:24:26","1","0");
INSERT INTO userstamp VALUES("90","2012-10-11 15:25:22","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:25:28","2012-10-11 15:27:37","1","0");
INSERT INTO userstamp VALUES("91","2012-10-11 15:29:04","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:29:09","2012-10-11 15:32:37","1","0");
INSERT INTO userstamp VALUES("92","2012-10-11 15:32:46","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:32:52","2012-10-11 15:34:06","1","0");
INSERT INTO userstamp VALUES("93","2012-10-11 15:34:11","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 15:34:16","2012-10-11 16:46:15","1","0");
INSERT INTO userstamp VALUES("94","2012-10-11 16:52:20","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 16:52:25","2012-10-11 16:53:35","1","0");
INSERT INTO userstamp VALUES("95","2012-10-11 17:27:23","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 17:27:28","2012-10-11 17:35:56","1","0");
INSERT INTO userstamp VALUES("96","2012-10-11 17:36:01","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 17:36:06","2012-10-11 17:37:14","1","0");
INSERT INTO userstamp VALUES("97","2012-10-11 17:37:16","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 17:37:22","2012-10-11 17:57:31","1","0");
INSERT INTO userstamp VALUES("98","2012-10-11 18:09:29","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 18:09:34","2012-10-11 18:23:06","1","0");
INSERT INTO userstamp VALUES("99","2012-10-11 18:23:12","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 18:23:17","2012-10-11 18:26:15","1","0");
INSERT INTO userstamp VALUES("100","2012-10-11 18:26:18","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-11 18:26:24","2012-10-11 18:27:31","1","0");
INSERT INTO userstamp VALUES("101","2012-10-12 18:18:34","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-12 18:18:39","2012-10-15 14:18:41","1","0");
INSERT INTO userstamp VALUES("102","2012-10-15 14:20:16","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-10-15 14:20:14","2012-10-15 15:25:43","1","0");
INSERT INTO userstamp VALUES("103","2012-10-15 15:44:33","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","2012-09-15 15:44:31","2012-09-15 20:05:00","1","0");



DROP TABLE workorders;

CREATE TABLE `workorders` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

INSERT INTO workorders VALUES("1","2012-10-09 17:22:14","0000-00-00 00:00:00","2012-10-09 17:23:17","1","0","0","0","Ingreso Matem√°tica","Jorge","","1","1","1","0","0","2012-10-09 18:22:07","0","0","0","50","0","0","0","0","0","9","0","0","0","0","9.18","0","6","1","1","0","0");
INSERT INTO workorders VALUES("2","2012-10-10 15:56:42","0000-00-00 00:00:00","0000-00-00 00:00:00","1","0","0","0","Quimica II","marcela","","1","1","1","0","0","2012-10-11 17:00:00","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","6","1","1","0","1");
INSERT INTO workorders VALUES("3","2012-10-10 16:01:01","0000-00-00 00:00:00","2012-10-11 15:34:22","1","0","0","0","01 Mylo Xyloto.pdf","Cristian","","1","1","1","0","0","2012-10-10 17:00:00","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","6","1","1","1","1");
INSERT INTO workorders VALUES("4","2012-10-10 16:01:02","0000-00-00 00:00:00","2012-10-11 15:34:22","1","0","0","0","01 Mylo Xyloto.pdf","Adrian","","1","1","1","0","0","2012-10-10 17:00:00","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","6","1","1","1","1");



DROP TABLE workorders_pages;

CREATE TABLE `workorders_pages` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
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
  `checked` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `last_instance` (`last_instance`),
  KEY `user_id` (`user_id`),
  KEY `workorder` (`workorder`),
  KEY `business` (`business`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;




DROP TABLE workorders_view;

CREATE ALGORITHM=TEMPTABLE DEFINER=`fotocasi_user`@`%` SQL SECURITY DEFINER VIEW `workorders_view` AS select `workorders`.`id` AS `id`,`jobs`.`date` AS `date`,`jobs`.`hour` AS `hour`,`jobs`.`filetitle` AS `filetitle`,`jobs`.`done` AS `done`,`workorders`.`ignore` AS `ignore`,`workorders`.`description` AS `description`,`workorders`.`costumername` AS `costumername`,`workorders`.`observations` AS `observations`,`workorders`.`deadline` AS `deadline`,`workorders`.`entregado` AS `entregado`,`workorders`.`deleted` AS `deleted` from ((`jobs` join `jobs_workorders` on((`jobs`.`id` = `jobs_workorders`.`jobs`))) join `workorders` on((`jobs_workorders`.`workorders` = `workorders`.`id`)));

INSERT INTO workorders_view VALUES("1","2012-10-09","18:22:07","","1","0","Ingreso Matem√°tica","Jorge","","2012-10-09 18:22:07","0","0");
INSERT INTO workorders_view VALUES("2","2012-10-11","17:00:00","Quimica II","24","0","Quimica II","marcela","","2012-10-11 17:00:00","0","0");
INSERT INTO workorders_view VALUES("3","2012-10-10","17:00:00","01 Mylo Xyloto.pdf","1","1","01 Mylo Xyloto.pdf","Cristian","","2012-10-10 17:00:00","0","0");
INSERT INTO workorders_view VALUES("4","2012-10-10","17:00:00","01 Mylo Xyloto.pdf","1","1","01 Mylo Xyloto.pdf","Adrian","","2012-10-10 17:00:00","0","0");



