#define SQUARE(n)(n * n)
#define CUBE(n)(n * n * n)

#define EXP_SLOW(n)((5 * CUBE(n)) / 4) // (5 * (n)^3) / 4
#define EXP_FAST(n)((4 * CUBE(n)) / 5) // (4 * (n)^3) / 5
#define EXP_MEDIUM_FAST(n)(CUBE(n)) // (n)^3
#define EXP_MEDIUM_SLOW(n)((6 * CUBE(n)) / 5 - (15 * SQUARE(n)) + (100 * n) - 140)    // (6 * (n)^3) / 5 - (15 * (n)^2) + (100 * n) - 140
#define EXP_ERRATIC(n)                                      \
     (n <= 50) ? ((100 - n) * CUBE(n) /  50)                \
    :(n <= 68) ? ((150 - n) * CUBE(n) / 100)                \
    :(n <= 98) ? (((1911 - 10 * n) / 3) * CUBE(n) / 500)    \
    :            ((160 - n) * CUBE(n) / 100)
#define EXP_FLUCTUATING(n)                                  \
     (n <= 15) ? (((n + 1) / 3 + 24) * CUBE(n) / 50)        \
    :(n <= 36) ? ((n + 14)           * CUBE(n) / 50)        \
    :            (((n / 2) + 32)     * CUBE(n) / 50)
#define EXP_RAT(n)((10 * n)) // This works
const u32 gExperienceTables[][MAX_LEVEL + 1] =
{
    { // Medium Fast
        0, // 0
        1, // 1
        EXP_MEDIUM_FAST(2),
        EXP_MEDIUM_FAST(3),
        EXP_MEDIUM_FAST(4),
        EXP_MEDIUM_FAST(5),
        EXP_MEDIUM_FAST(6),
        EXP_MEDIUM_FAST(7),
        EXP_MEDIUM_FAST(8),
        EXP_MEDIUM_FAST(9),
        EXP_MEDIUM_FAST(10),
        EXP_MEDIUM_FAST(11),
        EXP_MEDIUM_FAST(12),
        EXP_MEDIUM_FAST(13),
        EXP_MEDIUM_FAST(14),
        EXP_MEDIUM_FAST(15),
        EXP_MEDIUM_FAST(16),
        EXP_MEDIUM_FAST(17),
        EXP_MEDIUM_FAST(18),
        EXP_MEDIUM_FAST(19),
        EXP_MEDIUM_FAST(20),
        EXP_MEDIUM_FAST(21),
        EXP_MEDIUM_FAST(22),
        EXP_MEDIUM_FAST(23),
        EXP_MEDIUM_FAST(24),
        EXP_MEDIUM_FAST(25),
        EXP_MEDIUM_FAST(26),
        EXP_MEDIUM_FAST(27),
        EXP_MEDIUM_FAST(28),
        EXP_MEDIUM_FAST(29),
        EXP_MEDIUM_FAST(30),
        EXP_MEDIUM_FAST(31),
        EXP_MEDIUM_FAST(32),
        EXP_MEDIUM_FAST(33),
        EXP_MEDIUM_FAST(34),
        EXP_MEDIUM_FAST(35),
        EXP_MEDIUM_FAST(36),
        EXP_MEDIUM_FAST(37),
        EXP_MEDIUM_FAST(38),
        EXP_MEDIUM_FAST(39),
        EXP_MEDIUM_FAST(40),
        EXP_MEDIUM_FAST(41),
        EXP_MEDIUM_FAST(42),
        EXP_MEDIUM_FAST(43),
        EXP_MEDIUM_FAST(44),
        EXP_MEDIUM_FAST(45),
        EXP_MEDIUM_FAST(46),
        EXP_MEDIUM_FAST(47),
        EXP_MEDIUM_FAST(48),
        EXP_MEDIUM_FAST(49),
        EXP_MEDIUM_FAST(50),
        EXP_MEDIUM_FAST(51),
        EXP_MEDIUM_FAST(52),
        EXP_MEDIUM_FAST(53),
        EXP_MEDIUM_FAST(54),
        EXP_MEDIUM_FAST(55),
        EXP_MEDIUM_FAST(56),
        EXP_MEDIUM_FAST(57),
        EXP_MEDIUM_FAST(58),
        EXP_MEDIUM_FAST(59),
        EXP_MEDIUM_FAST(60),
        EXP_MEDIUM_FAST(61),
        EXP_MEDIUM_FAST(62),
        EXP_MEDIUM_FAST(63),
        EXP_MEDIUM_FAST(64),
        EXP_MEDIUM_FAST(65),
        EXP_MEDIUM_FAST(66),
        EXP_MEDIUM_FAST(67),
        EXP_MEDIUM_FAST(68),
        EXP_MEDIUM_FAST(69),
        EXP_MEDIUM_FAST(70),
        EXP_MEDIUM_FAST(71),
        EXP_MEDIUM_FAST(72),
        EXP_MEDIUM_FAST(73),
        EXP_MEDIUM_FAST(74),
        EXP_MEDIUM_FAST(75),
        EXP_MEDIUM_FAST(76),
        EXP_MEDIUM_FAST(77),
        EXP_MEDIUM_FAST(78),
        EXP_MEDIUM_FAST(79),
        EXP_MEDIUM_FAST(80),
        EXP_MEDIUM_FAST(81),
        EXP_MEDIUM_FAST(82),
        EXP_MEDIUM_FAST(83),
        EXP_MEDIUM_FAST(84),
        EXP_MEDIUM_FAST(85),
        EXP_MEDIUM_FAST(86),
        EXP_MEDIUM_FAST(87),
        EXP_MEDIUM_FAST(88),
        EXP_MEDIUM_FAST(89),
        EXP_MEDIUM_FAST(90),
        EXP_MEDIUM_FAST(91),
        EXP_MEDIUM_FAST(92),
        EXP_MEDIUM_FAST(93),
        EXP_MEDIUM_FAST(94),
        EXP_MEDIUM_FAST(95),
        EXP_MEDIUM_FAST(96),
        EXP_MEDIUM_FAST(97),
        EXP_MEDIUM_FAST(98),
        EXP_MEDIUM_FAST(99),
        EXP_MEDIUM_FAST(100),
    },
    { // Erratic
        0, // 0
        1, // 1
        EXP_ERRATIC(2),
        EXP_ERRATIC(3),
        EXP_ERRATIC(4),
        EXP_ERRATIC(5),
        EXP_ERRATIC(6),
        EXP_ERRATIC(7),
        EXP_ERRATIC(8),
        EXP_ERRATIC(9),
        EXP_ERRATIC(10),
        EXP_ERRATIC(11),
        EXP_ERRATIC(12),
        EXP_ERRATIC(13),
        EXP_ERRATIC(14),
        EXP_ERRATIC(15),
        EXP_ERRATIC(16),
        EXP_ERRATIC(17),
        EXP_ERRATIC(18),
        EXP_ERRATIC(19),
        EXP_ERRATIC(20),
        EXP_ERRATIC(21),
        EXP_ERRATIC(22),
        EXP_ERRATIC(23),
        EXP_ERRATIC(24),
        EXP_ERRATIC(25),
        EXP_ERRATIC(26),
        EXP_ERRATIC(27),
        EXP_ERRATIC(28),
        EXP_ERRATIC(29),
        EXP_ERRATIC(30),
        EXP_ERRATIC(31),
        EXP_ERRATIC(32),
        EXP_ERRATIC(33),
        EXP_ERRATIC(34),
        EXP_ERRATIC(35),
        EXP_ERRATIC(36),
        EXP_ERRATIC(37),
        EXP_ERRATIC(38),
        EXP_ERRATIC(39),
        EXP_ERRATIC(40),
        EXP_ERRATIC(41),
        EXP_ERRATIC(42),
        EXP_ERRATIC(43),
        EXP_ERRATIC(44),
        EXP_ERRATIC(45),
        EXP_ERRATIC(46),
        EXP_ERRATIC(47),
        EXP_ERRATIC(48),
        EXP_ERRATIC(49),
        EXP_ERRATIC(50),
        EXP_ERRATIC(51),
        EXP_ERRATIC(52),
        EXP_ERRATIC(53),
        EXP_ERRATIC(54),
        EXP_ERRATIC(55),
        EXP_ERRATIC(56),
        EXP_ERRATIC(57),
        EXP_ERRATIC(58),
        EXP_ERRATIC(59),
        EXP_ERRATIC(60),
        EXP_ERRATIC(61),
        EXP_ERRATIC(62),
        EXP_ERRATIC(63),
        EXP_ERRATIC(64),
        EXP_ERRATIC(65),
        EXP_ERRATIC(66),
        EXP_ERRATIC(67),
        EXP_ERRATIC(68),
        EXP_ERRATIC(69),
        EXP_ERRATIC(70),
        EXP_ERRATIC(71),
        EXP_ERRATIC(72),
        EXP_ERRATIC(73),
        EXP_ERRATIC(74),
        EXP_ERRATIC(75),
        EXP_ERRATIC(76),
        EXP_ERRATIC(77),
        EXP_ERRATIC(78),
        EXP_ERRATIC(79),
        EXP_ERRATIC(80),
        EXP_ERRATIC(81),
        EXP_ERRATIC(82),
        EXP_ERRATIC(83),
        EXP_ERRATIC(84),
        EXP_ERRATIC(85),
        EXP_ERRATIC(86),
        EXP_ERRATIC(87),
        EXP_ERRATIC(88),
        EXP_ERRATIC(89),
        EXP_ERRATIC(90),
        EXP_ERRATIC(91),
        EXP_ERRATIC(92),
        EXP_ERRATIC(93),
        EXP_ERRATIC(94),
        EXP_ERRATIC(95),
        EXP_ERRATIC(96),
        EXP_ERRATIC(97),
        EXP_ERRATIC(98),
        EXP_ERRATIC(99),
        EXP_ERRATIC(100),
    },
    { // Fluctuating
        0, // 0
        1, // 1
        EXP_FLUCTUATING(2),
        EXP_FLUCTUATING(3),
        EXP_FLUCTUATING(4),
        EXP_FLUCTUATING(5),
        EXP_FLUCTUATING(6),
        EXP_FLUCTUATING(7),
        EXP_FLUCTUATING(8),
        EXP_FLUCTUATING(9),
        EXP_FLUCTUATING(10),
        EXP_FLUCTUATING(11),
        EXP_FLUCTUATING(12),
        EXP_FLUCTUATING(13),
        EXP_FLUCTUATING(14),
        EXP_FLUCTUATING(15),
        EXP_FLUCTUATING(16),
        EXP_FLUCTUATING(17),
        EXP_FLUCTUATING(18),
        EXP_FLUCTUATING(19),
        EXP_FLUCTUATING(20),
        EXP_FLUCTUATING(21),
        EXP_FLUCTUATING(22),
        EXP_FLUCTUATING(23),
        EXP_FLUCTUATING(24),
        EXP_FLUCTUATING(25),
        EXP_FLUCTUATING(26),
        EXP_FLUCTUATING(27),
        EXP_FLUCTUATING(28),
        EXP_FLUCTUATING(29),
        EXP_FLUCTUATING(30),
        EXP_FLUCTUATING(31),
        EXP_FLUCTUATING(32),
        EXP_FLUCTUATING(33),
        EXP_FLUCTUATING(34),
        EXP_FLUCTUATING(35),
        EXP_FLUCTUATING(36),
        EXP_FLUCTUATING(37),
        EXP_FLUCTUATING(38),
        EXP_FLUCTUATING(39),
        EXP_FLUCTUATING(40),
        EXP_FLUCTUATING(41),
        EXP_FLUCTUATING(42),
        EXP_FLUCTUATING(43),
        EXP_FLUCTUATING(44),
        EXP_FLUCTUATING(45),
        EXP_FLUCTUATING(46),
        EXP_FLUCTUATING(47),
        EXP_FLUCTUATING(48),
        EXP_FLUCTUATING(49),
        EXP_FLUCTUATING(50),
        EXP_FLUCTUATING(51),
        EXP_FLUCTUATING(52),
        EXP_FLUCTUATING(53),
        EXP_FLUCTUATING(54),
        EXP_FLUCTUATING(55),
        EXP_FLUCTUATING(56),
        EXP_FLUCTUATING(57),
        EXP_FLUCTUATING(58),
        EXP_FLUCTUATING(59),
        EXP_FLUCTUATING(60),
        EXP_FLUCTUATING(61),
        EXP_FLUCTUATING(62),
        EXP_FLUCTUATING(63),
        EXP_FLUCTUATING(64),
        EXP_FLUCTUATING(65),
        EXP_FLUCTUATING(66),
        EXP_FLUCTUATING(67),
        EXP_FLUCTUATING(68),
        EXP_FLUCTUATING(69),
        EXP_FLUCTUATING(70),
        EXP_FLUCTUATING(71),
        EXP_FLUCTUATING(72),
        EXP_FLUCTUATING(73),
        EXP_FLUCTUATING(74),
        EXP_FLUCTUATING(75),
        EXP_FLUCTUATING(76),
        EXP_FLUCTUATING(77),
        EXP_FLUCTUATING(78),
        EXP_FLUCTUATING(79),
        EXP_FLUCTUATING(80),
        EXP_FLUCTUATING(81),
        EXP_FLUCTUATING(82),
        EXP_FLUCTUATING(83),
        EXP_FLUCTUATING(84),
        EXP_FLUCTUATING(85),
        EXP_FLUCTUATING(86),
        EXP_FLUCTUATING(87),
        EXP_FLUCTUATING(88),
        EXP_FLUCTUATING(89),
        EXP_FLUCTUATING(90),
        EXP_FLUCTUATING(91),
        EXP_FLUCTUATING(92),
        EXP_FLUCTUATING(93),
        EXP_FLUCTUATING(94),
        EXP_FLUCTUATING(95),
        EXP_FLUCTUATING(96),
        EXP_FLUCTUATING(97),
        EXP_FLUCTUATING(98),
        EXP_FLUCTUATING(99),
        EXP_FLUCTUATING(100),
    },
    { // Medium Slow
        0, // 0
        1, // 1
        EXP_MEDIUM_SLOW(2),
        EXP_MEDIUM_SLOW(3),
        EXP_MEDIUM_SLOW(4),
        EXP_MEDIUM_SLOW(5),
        EXP_MEDIUM_SLOW(6),
        EXP_MEDIUM_SLOW(7),
        EXP_MEDIUM_SLOW(8),
        EXP_MEDIUM_SLOW(9),
        EXP_MEDIUM_SLOW(10),
        EXP_MEDIUM_SLOW(11),
        EXP_MEDIUM_SLOW(12),
        EXP_MEDIUM_SLOW(13),
        EXP_MEDIUM_SLOW(14),
        EXP_MEDIUM_SLOW(15),
        EXP_MEDIUM_SLOW(16),
        EXP_MEDIUM_SLOW(17),
        EXP_MEDIUM_SLOW(18),
        EXP_MEDIUM_SLOW(19),
        EXP_MEDIUM_SLOW(20),
        EXP_MEDIUM_SLOW(21),
        EXP_MEDIUM_SLOW(22),
        EXP_MEDIUM_SLOW(23),
        EXP_MEDIUM_SLOW(24),
        EXP_MEDIUM_SLOW(25),
        EXP_MEDIUM_SLOW(26),
        EXP_MEDIUM_SLOW(27),
        EXP_MEDIUM_SLOW(28),
        EXP_MEDIUM_SLOW(29),
        EXP_MEDIUM_SLOW(30),
        EXP_MEDIUM_SLOW(31),
        EXP_MEDIUM_SLOW(32),
        EXP_MEDIUM_SLOW(33),
        EXP_MEDIUM_SLOW(34),
        EXP_MEDIUM_SLOW(35),
        EXP_MEDIUM_SLOW(36),
        EXP_MEDIUM_SLOW(37),
        EXP_MEDIUM_SLOW(38),
        EXP_MEDIUM_SLOW(39),
        EXP_MEDIUM_SLOW(40),
        EXP_MEDIUM_SLOW(41),
        EXP_MEDIUM_SLOW(42),
        EXP_MEDIUM_SLOW(43),
        EXP_MEDIUM_SLOW(44),
        EXP_MEDIUM_SLOW(45),
        EXP_MEDIUM_SLOW(46),
        EXP_MEDIUM_SLOW(47),
        EXP_MEDIUM_SLOW(48),
        EXP_MEDIUM_SLOW(49),
        EXP_MEDIUM_SLOW(50),
        EXP_MEDIUM_SLOW(51),
        EXP_MEDIUM_SLOW(52),
        EXP_MEDIUM_SLOW(53),
        EXP_MEDIUM_SLOW(54),
        EXP_MEDIUM_SLOW(55),
        EXP_MEDIUM_SLOW(56),
        EXP_MEDIUM_SLOW(57),
        EXP_MEDIUM_SLOW(58),
        EXP_MEDIUM_SLOW(59),
        EXP_MEDIUM_SLOW(60),
        EXP_MEDIUM_SLOW(61),
        EXP_MEDIUM_SLOW(62),
        EXP_MEDIUM_SLOW(63),
        EXP_MEDIUM_SLOW(64),
        EXP_MEDIUM_SLOW(65),
        EXP_MEDIUM_SLOW(66),
        EXP_MEDIUM_SLOW(67),
        EXP_MEDIUM_SLOW(68),
        EXP_MEDIUM_SLOW(69),
        EXP_MEDIUM_SLOW(70),
        EXP_MEDIUM_SLOW(71),
        EXP_MEDIUM_SLOW(72),
        EXP_MEDIUM_SLOW(73),
        EXP_MEDIUM_SLOW(74),
        EXP_MEDIUM_SLOW(75),
        EXP_MEDIUM_SLOW(76),
        EXP_MEDIUM_SLOW(77),
        EXP_MEDIUM_SLOW(78),
        EXP_MEDIUM_SLOW(79),
        EXP_MEDIUM_SLOW(80),
        EXP_MEDIUM_SLOW(81),
        EXP_MEDIUM_SLOW(82),
        EXP_MEDIUM_SLOW(83),
        EXP_MEDIUM_SLOW(84),
        EXP_MEDIUM_SLOW(85),
        EXP_MEDIUM_SLOW(86),
        EXP_MEDIUM_SLOW(87),
        EXP_MEDIUM_SLOW(88),
        EXP_MEDIUM_SLOW(89),
        EXP_MEDIUM_SLOW(90),
        EXP_MEDIUM_SLOW(91),
        EXP_MEDIUM_SLOW(92),
        EXP_MEDIUM_SLOW(93),
        EXP_MEDIUM_SLOW(94),
        EXP_MEDIUM_SLOW(95),
        EXP_MEDIUM_SLOW(96),
        EXP_MEDIUM_SLOW(97),
        EXP_MEDIUM_SLOW(98),
        EXP_MEDIUM_SLOW(99),
        EXP_MEDIUM_SLOW(100),
    },
    { // Fast
        0, // 0
        1, // 1
        EXP_FAST(2),
        EXP_FAST(3),
        EXP_FAST(4),
        EXP_FAST(5),
        EXP_FAST(6),
        EXP_FAST(7),
        EXP_FAST(8),
        EXP_FAST(9),
        EXP_FAST(10),
        EXP_FAST(11),
        EXP_FAST(12),
        EXP_FAST(13),
        EXP_FAST(14),
        EXP_FAST(15),
        EXP_FAST(16),
        EXP_FAST(17),
        EXP_FAST(18),
        EXP_FAST(19),
        EXP_FAST(20),
        EXP_FAST(21),
        EXP_FAST(22),
        EXP_FAST(23),
        EXP_FAST(24),
        EXP_FAST(25),
        EXP_FAST(26),
        EXP_FAST(27),
        EXP_FAST(28),
        EXP_FAST(29),
        EXP_FAST(30),
        EXP_FAST(31),
        EXP_FAST(32),
        EXP_FAST(33),
        EXP_FAST(34),
        EXP_FAST(35),
        EXP_FAST(36),
        EXP_FAST(37),
        EXP_FAST(38),
        EXP_FAST(39),
        EXP_FAST(40),
        EXP_FAST(41),
        EXP_FAST(42),
        EXP_FAST(43),
        EXP_FAST(44),
        EXP_FAST(45),
        EXP_FAST(46),
        EXP_FAST(47),
        EXP_FAST(48),
        EXP_FAST(49),
        EXP_FAST(50),
        EXP_FAST(51),
        EXP_FAST(52),
        EXP_FAST(53),
        EXP_FAST(54),
        EXP_FAST(55),
        EXP_FAST(56),
        EXP_FAST(57),
        EXP_FAST(58),
        EXP_FAST(59),
        EXP_FAST(60),
        EXP_FAST(61),
        EXP_FAST(62),
        EXP_FAST(63),
        EXP_FAST(64),
        EXP_FAST(65),
        EXP_FAST(66),
        EXP_FAST(67),
        EXP_FAST(68),
        EXP_FAST(69),
        EXP_FAST(70),
        EXP_FAST(71),
        EXP_FAST(72),
        EXP_FAST(73),
        EXP_FAST(74),
        EXP_FAST(75),
        EXP_FAST(76),
        EXP_FAST(77),
        EXP_FAST(78),
        EXP_FAST(79),
        EXP_FAST(80),
        EXP_FAST(81),
        EXP_FAST(82),
        EXP_FAST(83),
        EXP_FAST(84),
        EXP_FAST(85),
        EXP_FAST(86),
        EXP_FAST(87),
        EXP_FAST(88),
        EXP_FAST(89),
        EXP_FAST(90),
        EXP_FAST(91),
        EXP_FAST(92),
        EXP_FAST(93),
        EXP_FAST(94),
        EXP_FAST(95),
        EXP_FAST(96),
        EXP_FAST(97),
        EXP_FAST(98),
        EXP_FAST(99),
        EXP_FAST(100),
    },
    { // Slow
        0, // 0
        1, // 1
        EXP_SLOW(2),
        EXP_SLOW(3),
        EXP_SLOW(4),
        EXP_SLOW(5),
        EXP_SLOW(6),
        EXP_SLOW(7),
        EXP_SLOW(8),
        EXP_SLOW(9),
        EXP_SLOW(10),
        EXP_SLOW(11),
        EXP_SLOW(12),
        EXP_SLOW(13),
        EXP_SLOW(14),
        EXP_SLOW(15),
        EXP_SLOW(16),
        EXP_SLOW(17),
        EXP_SLOW(18),
        EXP_SLOW(19),
        EXP_SLOW(20),
        EXP_SLOW(21),
        EXP_SLOW(22),
        EXP_SLOW(23),
        EXP_SLOW(24),
        EXP_SLOW(25),
        EXP_SLOW(26),
        EXP_SLOW(27),
        EXP_SLOW(28),
        EXP_SLOW(29),
        EXP_SLOW(30),
        EXP_SLOW(31),
        EXP_SLOW(32),
        EXP_SLOW(33),
        EXP_SLOW(34),
        EXP_SLOW(35),
        EXP_SLOW(36),
        EXP_SLOW(37),
        EXP_SLOW(38),
        EXP_SLOW(39),
        EXP_SLOW(40),
        EXP_SLOW(41),
        EXP_SLOW(42),
        EXP_SLOW(43),
        EXP_SLOW(44),
        EXP_SLOW(45),
        EXP_SLOW(46),
        EXP_SLOW(47),
        EXP_SLOW(48),
        EXP_SLOW(49),
        EXP_SLOW(50),
        EXP_SLOW(51),
        EXP_SLOW(52),
        EXP_SLOW(53),
        EXP_SLOW(54),
        EXP_SLOW(55),
        EXP_SLOW(56),
        EXP_SLOW(57),
        EXP_SLOW(58),
        EXP_SLOW(59),
        EXP_SLOW(60),
        EXP_SLOW(61),
        EXP_SLOW(62),
        EXP_SLOW(63),
        EXP_SLOW(64),
        EXP_SLOW(65),
        EXP_SLOW(66),
        EXP_SLOW(67),
        EXP_SLOW(68),
        EXP_SLOW(69),
        EXP_SLOW(70),
        EXP_SLOW(71),
        EXP_SLOW(72),
        EXP_SLOW(73),
        EXP_SLOW(74),
        EXP_SLOW(75),
        EXP_SLOW(76),
        EXP_SLOW(77),
        EXP_SLOW(78),
        EXP_SLOW(79),
        EXP_SLOW(80),
        EXP_SLOW(81),
        EXP_SLOW(82),
        EXP_SLOW(83),
        EXP_SLOW(84),
        EXP_SLOW(85),
        EXP_SLOW(86),
        EXP_SLOW(87),
        EXP_SLOW(88),
        EXP_SLOW(89),
        EXP_SLOW(90),
        EXP_SLOW(91),
        EXP_SLOW(92),
        EXP_SLOW(93),
        EXP_SLOW(94),
        EXP_SLOW(95),
        EXP_SLOW(96),
        EXP_SLOW(97),
        EXP_SLOW(98),
        EXP_SLOW(99),
        EXP_SLOW(100),
    },
    { // Rat EXP, testing new exp groups for NFR?
        0, // 0
        1, // 1
        EXP_RAT(2),
        EXP_RAT(3),
        EXP_RAT(4),
        EXP_RAT(5),
        EXP_RAT(6),
        EXP_RAT(7),
        EXP_RAT(8),
        EXP_RAT(9),
        EXP_RAT(10),
        EXP_RAT(11),
        EXP_RAT(12),
        EXP_RAT(13),
        EXP_RAT(14),
        EXP_RAT(15),
        EXP_RAT(16),
        EXP_RAT(17),
        EXP_RAT(18),
        EXP_RAT(19),
        EXP_RAT(20),
        EXP_RAT(21),
        EXP_RAT(22),
        EXP_RAT(23),
        EXP_RAT(24),
        EXP_RAT(25),
        EXP_RAT(26),
        EXP_RAT(27),
        EXP_RAT(28),
        EXP_RAT(29),
        EXP_RAT(30),
        EXP_RAT(31),
        EXP_RAT(32),
        EXP_RAT(33),
        EXP_RAT(34),
        EXP_RAT(35),
        EXP_RAT(36),
        EXP_RAT(37),
        EXP_RAT(38),
        EXP_RAT(39),
        EXP_RAT(40),
        EXP_RAT(41),
        EXP_RAT(42),
        EXP_RAT(43),
        EXP_RAT(44),
        EXP_RAT(45),
        EXP_RAT(46),
        EXP_RAT(47),
        EXP_RAT(48),
        EXP_RAT(49),
        EXP_RAT(50),
        EXP_RAT(51),
        EXP_RAT(52),
        EXP_RAT(53),
        EXP_RAT(54),
        EXP_RAT(55),
        EXP_RAT(56),
        EXP_RAT(57),
        EXP_RAT(58),
        EXP_RAT(59),
        EXP_RAT(60),
        EXP_RAT(61),
        EXP_RAT(62),
        EXP_RAT(63),
        EXP_RAT(64),
        EXP_RAT(65),
        EXP_RAT(66),
        EXP_RAT(67),
        EXP_RAT(68),
        EXP_RAT(69),
        EXP_RAT(70),
        EXP_RAT(71),
        EXP_RAT(72),
        EXP_RAT(73),
        EXP_RAT(74),
        EXP_RAT(75),
        EXP_RAT(76),
        EXP_RAT(77),
        EXP_RAT(78),
        EXP_RAT(79),
        EXP_RAT(80),
        EXP_RAT(81),
        EXP_RAT(82),
        EXP_RAT(83),
        EXP_RAT(84),
        EXP_RAT(85),
        EXP_RAT(86),
        EXP_RAT(87),
        EXP_RAT(88),
        EXP_RAT(89),
        EXP_RAT(90),
        EXP_RAT(91),
        EXP_RAT(92),
        EXP_RAT(93),
        EXP_RAT(94),
        EXP_RAT(95),
        EXP_RAT(96),
        EXP_RAT(97),
        EXP_RAT(98),
        EXP_RAT(99),
        EXP_RAT(100),
    }
};
