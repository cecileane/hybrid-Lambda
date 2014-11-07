//  Copyright John Maddock 2006.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MATH_SP_UC_FACTORIALS_HPP
#define BOOST_MATH_SP_UC_FACTORIALS_HPP

#ifdef _MSC_VER
#pragma once
#endif

#include "array.hpp"
#ifdef BOOST_MSVC
#pragma warning(push) // Temporary until lexical cast fixed.
#pragma warning(disable: 4127 4701)
#endif
#ifndef BOOST_MATH_NO_LEXICAL_CAST
#include "lexical_cast.hpp"
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
//#include <boost/config/no_tr1/cmath.hpp>
//#include <boost/math/special_functions/math_fwd.hpp>

namespace boost { namespace math
{
// Forward declarations:
template <class T>
struct max_factorial;

// Definitions:
template <>
inline float unchecked_factorial<float>(unsigned i BOOST_MATH_APPEND_EXPLICIT_TEMPLATE_TYPE_SPEC(float))
{
   static const boost::array<float, 35> factorials = {{
      1.0F,
      1.0F,
      2.0F,
      6.0F,
      24.0F,
      120.0F,
      720.0F,
      5040.0F,
      40320.0F,
      362880.0F,
      3628800.0F,
      39916800.0F,
      479001600.0F,
      6227020800.0F,
      87178291200.0F,
      1307674368000.0F,
      20922789888000.0F,
      355687428096000.0F,
      6402373705728000.0F,
      121645100408832000.0F,
      0.243290200817664e19F,
      0.5109094217170944e20F,
      0.112400072777760768e22F,
      0.2585201673888497664e23F,
      0.62044840173323943936e24F,
      0.15511210043330985984e26F,
      0.403291461126605635584e27F,
      0.10888869450418352160768e29F,
      0.304888344611713860501504e30F,
      0.8841761993739701954543616e31F,
      0.26525285981219105863630848e33F,
      0.822283865417792281772556288e34F,
      0.26313083693369353016721801216e36F,
      0.868331761881188649551819440128e37F,
      0.29523279903960414084761860964352e39F,
   }};

   return factorials[i];
}

template <>
struct max_factorial<float>
{
   BOOST_STATIC_CONSTANT(unsigned, value = 34);
};


template <>
inline long double unchecked_factorial<long double>(unsigned i BOOST_MATH_APPEND_EXPLICIT_TEMPLATE_TYPE_SPEC(long double))
{
   static const boost::array<long double, 171> factorials = {{
      1L,
      1L,
      2L,
      6L,
      24L,
      120L,
      720L,
      5040L,
      40320L,
      362880.0L,
      3628800.0L,
      39916800.0L,
      479001600.0L,
      6227020800.0L,
      87178291200.0L,
      1307674368000.0L,
      20922789888000.0L,
      355687428096000.0L,
      6402373705728000.0L,
      121645100408832000.0L,
      0.243290200817664e19L,
      0.5109094217170944e20L,
      0.112400072777760768e22L,
      0.2585201673888497664e23L,
      0.62044840173323943936e24L,
      0.15511210043330985984e26L,
      0.403291461126605635584e27L,
      0.10888869450418352160768e29L,
      0.304888344611713860501504e30L,
      0.8841761993739701954543616e31L,
      0.26525285981219105863630848e33L,
      0.822283865417792281772556288e34L,
      0.26313083693369353016721801216e36L,
      0.868331761881188649551819440128e37L,
      0.29523279903960414084761860964352e39L,
      0.103331479663861449296666513375232e41L,
      0.3719933267899012174679994481508352e42L,
      0.137637530912263450463159795815809024e44L,
      0.5230226174666011117600072241000742912e45L,
      0.203978820811974433586402817399028973568e47L,
      0.815915283247897734345611269596115894272e48L,
      0.3345252661316380710817006205344075166515e50L,
      0.1405006117752879898543142606244511569936e52L,
      0.6041526306337383563735513206851399750726e53L,
      0.265827157478844876804362581101461589032e55L,
      0.1196222208654801945619631614956577150644e57L,
      0.5502622159812088949850305428800254892962e58L,
      0.2586232415111681806429643551536119799692e60L,
      0.1241391559253607267086228904737337503852e62L,
      0.6082818640342675608722521633212953768876e63L,
      0.3041409320171337804361260816606476884438e65L,
      0.1551118753287382280224243016469303211063e67L,
      0.8065817517094387857166063685640376697529e68L,
      0.427488328406002556429801375338939964969e70L,
      0.2308436973392413804720927426830275810833e72L,
      0.1269640335365827592596510084756651695958e74L,
      0.7109985878048634518540456474637249497365e75L,
      0.4052691950487721675568060190543232213498e77L,
      0.2350561331282878571829474910515074683829e79L,
      0.1386831185456898357379390197203894063459e81L,
      0.8320987112741390144276341183223364380754e82L,
      0.507580213877224798800856812176625227226e84L,
      0.3146997326038793752565312235495076408801e86L,
      0.1982608315404440064116146708361898137545e88L,
      0.1268869321858841641034333893351614808029e90L,
      0.8247650592082470666723170306785496252186e91L,
      0.5443449390774430640037292402478427526443e93L,
      0.3647111091818868528824985909660546442717e95L,
      0.2480035542436830599600990418569171581047e97L,
      0.1711224524281413113724683388812728390923e99L,
      0.1197857166996989179607278372168909873646e101L,
      0.8504785885678623175211676442399260102886e102L,
      0.6123445837688608686152407038527467274078e104L,
      0.4470115461512684340891257138125051110077e106L,
      0.3307885441519386412259530282212537821457e108L,
      0.2480914081139539809194647711659403366093e110L,
      0.188549470166605025498793226086114655823e112L,
      0.1451830920282858696340707840863082849837e114L,
      0.1132428117820629783145752115873204622873e116L,
      0.8946182130782975286851441715398316520698e117L,
      0.7156945704626380229481153372318653216558e119L,
      0.5797126020747367985879734231578109105412e121L,
      0.4753643337012841748421382069894049466438e123L,
      0.3945523969720658651189747118012061057144e125L,
      0.3314240134565353266999387579130131288001e127L,
      0.2817104114380550276949479442260611594801e129L,
      0.2422709538367273238176552320344125971528e131L,
      0.210775729837952771721360051869938959523e133L,
      0.1854826422573984391147968456455462843802e135L,
      0.1650795516090846108121691926245361930984e137L,
      0.1485715964481761497309522733620825737886e139L,
      0.1352001527678402962551665687594951421476e141L,
      0.1243841405464130725547532432587355307758e143L,
      0.1156772507081641574759205162306240436215e145L,
      0.1087366156656743080273652852567866010042e147L,
      0.103299784882390592625997020993947270954e149L,
      0.9916779348709496892095714015418938011582e150L,
      0.9619275968248211985332842594956369871234e152L,
      0.942689044888324774562618574305724247381e154L,
      0.9332621544394415268169923885626670049072e156L,
      0.9332621544394415268169923885626670049072e158L,
      0.9425947759838359420851623124482936749562e160L,
      0.9614466715035126609268655586972595484554e162L,
      0.990290071648618040754671525458177334909e164L,
      0.1029901674514562762384858386476504428305e167L,
      0.1081396758240290900504101305800329649721e169L,
      0.1146280563734708354534347384148349428704e171L,
      0.1226520203196137939351751701038733888713e173L,
      0.132464181945182897449989183712183259981e175L,
      0.1443859583202493582204882102462797533793e177L,
      0.1588245541522742940425370312709077287172e179L,
      0.1762952551090244663872161047107075788761e181L,
      0.1974506857221074023536820372759924883413e183L,
      0.2231192748659813646596607021218715118256e185L,
      0.2543559733472187557120132004189335234812e187L,
      0.2925093693493015690688151804817735520034e189L,
      0.339310868445189820119825609358857320324e191L,
      0.396993716080872089540195962949863064779e193L,
      0.4684525849754290656574312362808384164393e195L,
      0.5574585761207605881323431711741977155627e197L,
      0.6689502913449127057588118054090372586753e199L,
      0.8094298525273443739681622845449350829971e201L,
      0.9875044200833601362411579871448208012564e203L,
      0.1214630436702532967576624324188129585545e206L,
      0.1506141741511140879795014161993280686076e208L,
      0.1882677176888926099743767702491600857595e210L,
      0.237217324288004688567714730513941708057e212L,
      0.3012660018457659544809977077527059692324e214L,
      0.3856204823625804217356770659234636406175e216L,
      0.4974504222477287440390234150412680963966e218L,
      0.6466855489220473672507304395536485253155e220L,
      0.8471580690878820510984568758152795681634e222L,
      0.1118248651196004307449963076076169029976e225L,
      0.1487270706090685728908450891181304809868e227L,
      0.1992942746161518876737324194182948445223e229L,
      0.269047270731805048359538766214698040105e231L,
      0.3659042881952548657689727220519893345429e233L,
      0.5012888748274991661034926292112253883237e235L,
      0.6917786472619488492228198283114910358867e237L,
      0.9615723196941089004197195613529725398826e239L,
      0.1346201247571752460587607385894161555836e242L,
      0.1898143759076170969428526414110767793728e244L,
      0.2695364137888162776588507508037290267094e246L,
      0.3854370717180072770521565736493325081944e248L,
      0.5550293832739304789551054660550388118e250L,
      0.80479260574719919448490292577980627711e252L,
      0.1174997204390910823947958271638517164581e255L,
      0.1727245890454638911203498659308620231933e257L,
      0.2556323917872865588581178015776757943262e259L,
      0.380892263763056972698595524350736933546e261L,
      0.571338395644585459047893286526105400319e263L,
      0.8627209774233240431623188626544191544816e265L,
      0.1311335885683452545606724671234717114812e268L,
      0.2006343905095682394778288746989117185662e270L,
      0.308976961384735088795856467036324046592e272L,
      0.4789142901463393876335775239063022722176e274L,
      0.7471062926282894447083809372938315446595e276L,
      0.1172956879426414428192158071551315525115e279L,
      0.1853271869493734796543609753051078529682e281L,
      0.2946702272495038326504339507351214862195e283L,
      0.4714723635992061322406943211761943779512e285L,
      0.7590705053947218729075178570936729485014e287L,
      0.1229694218739449434110178928491750176572e290L,
      0.2004401576545302577599591653441552787813e292L,
      0.3287218585534296227263330311644146572013e294L,
      0.5423910666131588774984495014212841843822e296L,
      0.9003691705778437366474261723593317460744e298L,
      0.1503616514864999040201201707840084015944e301L,
      0.2526075744973198387538018869171341146786e303L,
      0.4269068009004705274939251888899566538069e305L,
      0.7257415615307998967396728211129263114717e307L,
   }};

   return factorials[i];
}

template <>
struct max_factorial<long double>
{
   BOOST_STATIC_CONSTANT(unsigned, value = 170);
};

template <>
inline double unchecked_factorial<double>(unsigned i BOOST_MATH_APPEND_EXPLICIT_TEMPLATE_TYPE_SPEC(double))
{
   return static_cast<double>(boost::math::unchecked_factorial<long double>(i));
}

template <>
struct max_factorial<double>
{
   BOOST_STATIC_CONSTANT(unsigned,
      value = ::boost::math::max_factorial<long double>::value);
};

#ifndef BOOST_MATH_NO_LEXICAL_CAST

template <class T>
inline T unchecked_factorial(unsigned i BOOST_MATH_APPEND_EXPLICIT_TEMPLATE_TYPE_SPEC(T))
{
   BOOST_STATIC_ASSERT(!boost::is_integral<T>::value);
   // factorial<unsigned int>(n) is not implemented
   // because it would overflow integral type T for too small n
   // to be useful. Use instead a floating-point type,
   // and convert to an unsigned type if essential, for example:
   // unsigned int nfac = static_cast<unsigned int>(factorial<double>(n));
   // See factorial documentation for more detail.

   static const boost::array<T, 101> factorials = {{
      boost::lexical_cast<T>("1"),
      boost::lexical_cast<T>("1"),
      boost::lexical_cast<T>("2"),
      boost::lexical_cast<T>("6"),
      boost::lexical_cast<T>("24"),
      boost::lexical_cast<T>("120"),
      boost::lexical_cast<T>("720"),
      boost::lexical_cast<T>("5040"),
      boost::lexical_cast<T>("40320"),
      boost::lexical_cast<T>("362880"),
      boost::lexical_cast<T>("3628800"),
      boost::lexical_cast<T>("39916800"),
      boost::lexical_cast<T>("479001600"),
      boost::lexical_cast<T>("6227020800"),
      boost::lexical_cast<T>("87178291200"),
      boost::lexical_cast<T>("1307674368000"),
      boost::lexical_cast<T>("20922789888000"),
      boost::lexical_cast<T>("355687428096000"),
      boost::lexical_cast<T>("6402373705728000"),
      boost::lexical_cast<T>("121645100408832000"),
      boost::lexical_cast<T>("2432902008176640000"),
      boost::lexical_cast<T>("51090942171709440000"),
      boost::lexical_cast<T>("1124000727777607680000"),
      boost::lexical_cast<T>("25852016738884976640000"),
      boost::lexical_cast<T>("620448401733239439360000"),
      boost::lexical_cast<T>("15511210043330985984000000"),
      boost::lexical_cast<T>("403291461126605635584000000"),
      boost::lexical_cast<T>("10888869450418352160768000000"),
      boost::lexical_cast<T>("304888344611713860501504000000"),
      boost::lexical_cast<T>("8841761993739701954543616000000"),
      boost::lexical_cast<T>("265252859812191058636308480000000"),
      boost::lexical_cast<T>("8222838654177922817725562880000000"),
      boost::lexical_cast<T>("263130836933693530167218012160000000"),
      boost::lexical_cast<T>("8683317618811886495518194401280000000"),
      boost::lexical_cast<T>("295232799039604140847618609643520000000"),
      boost::lexical_cast<T>("10333147966386144929666651337523200000000"),
      boost::lexical_cast<T>("371993326789901217467999448150835200000000"),
      boost::lexical_cast<T>("13763753091226345046315979581580902400000000"),
      boost::lexical_cast<T>("523022617466601111760007224100074291200000000"),
      boost::lexical_cast<T>("20397882081197443358640281739902897356800000000"),
      boost::lexical_cast<T>("815915283247897734345611269596115894272000000000"),
      boost::lexical_cast<T>("33452526613163807108170062053440751665152000000000"),
      boost::lexical_cast<T>("1405006117752879898543142606244511569936384000000000"),
      boost::lexical_cast<T>("60415263063373835637355132068513997507264512000000000"),
      boost::lexical_cast<T>("2658271574788448768043625811014615890319638528000000000"),
      boost::lexical_cast<T>("119622220865480194561963161495657715064383733760000000000"),
      boost::lexical_cast<T>("5502622159812088949850305428800254892961651752960000000000"),
      boost::lexical_cast<T>("258623241511168180642964355153611979969197632389120000000000"),
      boost::lexical_cast<T>("12413915592536072670862289047373375038521486354677760000000000"),
      boost::lexical_cast<T>("608281864034267560872252163321295376887552831379210240000000000"),
      boost::lexical_cast<T>("30414093201713378043612608166064768844377641568960512000000000000"),
      boost::lexical_cast<T>("1551118753287382280224243016469303211063259720016986112000000000000"),
      boost::lexical_cast<T>("80658175170943878571660636856403766975289505440883277824000000000000"),
      boost::lexical_cast<T>("4274883284060025564298013753389399649690343788366813724672000000000000"),
      boost::lexical_cast<T>("230843697339241380472092742683027581083278564571807941132288000000000000"),
      boost::lexical_cast<T>("12696403353658275925965100847566516959580321051449436762275840000000000000"),
      boost::lexical_cast<T>("710998587804863451854045647463724949736497978881168458687447040000000000000"),
      boost::lexical_cast<T>("40526919504877216755680601905432322134980384796226602145184481280000000000000"),
      boost::lexical_cast<T>("2350561331282878571829474910515074683828862318181142924420699914240000000000000"),
      boost::lexical_cast<T>("138683118545689835737939019720389406345902876772687432540821294940160000000000000"),
      boost::lexical_cast<T>("8320987112741390144276341183223364380754172606361245952449277696409600000000000000"),
      boost::lexical_cast<T>("507580213877224798800856812176625227226004528988036003099405939480985600000000000000"),
      boost::lexical_cast<T>("31469973260387937525653122354950764088012280797258232192163168247821107200000000000000"),
      boost::lexical_cast<T>("1982608315404440064116146708361898137544773690227268628106279599612729753600000000000000"),
      boost::lexical_cast<T>("126886932185884164103433389335161480802865516174545192198801894375214704230400000000000000"),
      boost::lexical_cast<T>("8247650592082470666723170306785496252186258551345437492922123134388955774976000000000000000"),
      boost::lexical_cast<T>("544344939077443064003729240247842752644293064388798874532860126869671081148416000000000000000"),
      boost::lexical_cast<T>("36471110918188685288249859096605464427167635314049524593701628500267962436943872000000000000000"),
      boost::lexical_cast<T>("2480035542436830599600990418569171581047399201355367672371710738018221445712183296000000000000000"),
      boost::lexical_cast<T>("171122452428141311372468338881272839092270544893520369393648040923257279754140647424000000000000000"),
      boost::lexical_cast<T>("11978571669969891796072783721689098736458938142546425857555362864628009582789845319680000000000000000"),
      boost::lexical_cast<T>("850478588567862317521167644239926010288584608120796235886430763388588680378079017697280000000000000000"),
      boost::lexical_cast<T>("61234458376886086861524070385274672740778091784697328983823014963978384987221689274204160000000000000000"),
      boost::lexical_cast<T>("4470115461512684340891257138125051110076800700282905015819080092370422104067183317016903680000000000000000"),
      boost::lexical_cast<T>("330788544151938641225953028221253782145683251820934971170611926835411235700971565459250872320000000000000000"),
      boost::lexical_cast<T>("24809140811395398091946477116594033660926243886570122837795894512655842677572867409443815424000000000000000000"),
      boost::lexical_cast<T>("1885494701666050254987932260861146558230394535379329335672487982961844043495537923117729972224000000000000000000"),
      boost::lexical_cast<T>("145183092028285869634070784086308284983740379224208358846781574688061991349156420080065207861248000000000000000000"),
      boost::lexical_cast<T>("11324281178206297831457521158732046228731749579488251990048962825668835325234200766245086213177344000000000000000000"),
      boost::lexical_cast<T>("894618213078297528685144171539831652069808216779571907213868063227837990693501860533361810841010176000000000000000000"),
      boost::lexical_cast<T>("71569457046263802294811533723186532165584657342365752577109445058227039255480148842668944867280814080000000000000000000"),
      boost::lexical_cast<T>("5797126020747367985879734231578109105412357244731625958745865049716390179693892056256184534249745940480000000000000000000"),
      boost::lexical_cast<T>("475364333701284174842138206989404946643813294067993328617160934076743994734899148613007131808479167119360000000000000000000"),
      boost::lexical_cast<T>("39455239697206586511897471180120610571436503407643446275224357528369751562996629334879591940103770870906880000000000000000000"),
      boost::lexical_cast<T>("3314240134565353266999387579130131288000666286242049487118846032383059131291716864129885722968716753156177920000000000000000000"),
      boost::lexical_cast<T>("281710411438055027694947944226061159480056634330574206405101912752560026159795933451040286452340924018275123200000000000000000000"),
      boost::lexical_cast<T>("24227095383672732381765523203441259715284870552429381750838764496720162249742450276789464634901319465571660595200000000000000000000"),
      boost::lexical_cast<T>("2107757298379527717213600518699389595229783738061356212322972511214654115727593174080683423236414793504734471782400000000000000000000"),
      boost::lexical_cast<T>("185482642257398439114796845645546284380220968949399346684421580986889562184028199319100141244804501828416633516851200000000000000000000"),
      boost::lexical_cast<T>("16507955160908461081216919262453619309839666236496541854913520707833171034378509739399912570787600662729080382999756800000000000000000000"),
      boost::lexical_cast<T>("1485715964481761497309522733620825737885569961284688766942216863704985393094065876545992131370884059645617234469978112000000000000000000000"),
      boost::lexical_cast<T>("135200152767840296255166568759495142147586866476906677791741734597153670771559994765685283954750449427751168336768008192000000000000000000000"),
      boost::lexical_cast<T>("12438414054641307255475324325873553077577991715875414356840239582938137710983519518443046123837041347353107486982656753664000000000000000000000"),
      boost::lexical_cast<T>("1156772507081641574759205162306240436214753229576413535186142281213246807121467315215203289516844845303838996289387078090752000000000000000000000"),
      boost::lexical_cast<T>("108736615665674308027365285256786601004186803580182872307497374434045199869417927630229109214583415458560865651202385340530688000000000000000000000"),
      boost::lexical_cast<T>("10329978488239059262599702099394727095397746340117372869212250571234293987594703124871765375385424468563282236864226607350415360000000000000000000000"),
      boost::lexical_cast<T>("991677934870949689209571401541893801158183648651267795444376054838492222809091499987689476037000748982075094738965754305639874560000000000000000000000"),
      boost::lexical_cast<T>("96192759682482119853328425949563698712343813919172976158104477319333745612481875498805879175589072651261284189679678167647067832320000000000000000000000"),
      boost::lexical_cast<T>("9426890448883247745626185743057242473809693764078951663494238777294707070023223798882976159207729119823605850588608460429412647567360000000000000000000000"),
      boost::lexical_cast<T>("933262154439441526816992388562667004907159682643816214685929638952175999932299156089414639761565182862536979208272237582511852109168640000000000000000000000"),
      boost::lexical_cast<T>("93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000"),
   }};

   return factorials[i];
}

template <class T>
struct max_factorial
{
   BOOST_STATIC_CONSTANT(unsigned, value = 100);
};

#else // BOOST_MATH_NO_LEXICAL_CAST

template <class T>
inline T unchecked_factorial(unsigned i BOOST_MATH_APPEND_EXPLICIT_TEMPLATE_TYPE_SPEC(T))
{
   return 1;
}

template <class T>
struct max_factorial
{
   BOOST_STATIC_CONSTANT(unsigned, value = 0);
};

#endif

#ifndef BOOST_NO_INCLASS_MEMBER_INITIALIZATION
template <class T>
const unsigned max_factorial<T>::value;
#endif

} // namespace math
} // namespace boost

#endif // BOOST_MATH_SP_UC_FACTORIALS_HPP
