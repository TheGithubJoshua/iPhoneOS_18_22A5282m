@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (id)init;
- (void)setType:(int)a0;
- (id)text;
- (void).cxx_destruct;
- (id)description;
- (void)setText:(id)a0;
- (int)type;
- (id)propertySet;
- (id)shapeProperties;

@end
