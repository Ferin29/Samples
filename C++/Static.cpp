// -------- Static Cast --------
var = static_cast<dest type>(var source)
/**/
class Fruit{};
class Banana: public Fruit{};
class Tomato: public Fruit{};
Banana banana;
Fruit& fruitRef = banana;
Banana& bananaRef = static_cast<Banana&>(fruitRef);

//Va compiler, mais dangereux car Banana != Tomato
Tomato& tomatoRef = static_cast<Tomato&>(fruitRef);

// -------- Dynamic Cast --------
// |	Static Cast with error     |
// --------- -------- -----------
var = dynamic_cast<dest type>(var source)
Tomato tomato;
Fruit* fruitPtr = &tomato;
Banana* bananaPtr = dynamic_cast<Banana*>(fruitPtr); // return (0), donc != Static Cast!
if (bananaPtr == 0)
abort();
