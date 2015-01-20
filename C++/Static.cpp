// -------- Static Cast --------
var = static_cast<dest type>(var source)
/**/
class Fruit{};
class Banana: public Fruit{};
Banana banana;
Fruit& fruitRef = banana;
Banana& bananaRef = static_cast<Banana&>(fruitRef);