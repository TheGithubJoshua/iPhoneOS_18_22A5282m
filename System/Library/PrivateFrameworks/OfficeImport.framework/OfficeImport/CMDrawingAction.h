@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (float)floatValue;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (int)type;
- (id)value;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;
- (id)initWithType:(int)a0 andValue:(id)a1;

@end
