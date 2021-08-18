
template<>
struct Traits<Fruit>{
    static string name(int ind){
        switch(ind){
            case 0: return "apple";
            case 1: return "orange";
            case 2: return "pear";
        }
        return "unknown";
    }
};

template<>
struct Traits<Color>{
    static string name(int ind){
        switch(ind){
            case 0: return "red";
            case 1: return "green";
            case 2: return "orange";
        }
        return "unknown";
    }
};

