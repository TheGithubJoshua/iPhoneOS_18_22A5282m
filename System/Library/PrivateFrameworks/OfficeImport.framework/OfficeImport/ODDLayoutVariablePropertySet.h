@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (int)direction;
- (id)description;
- (void)setDirection:(int)a0;
- (BOOL)hasDirection;

@end
