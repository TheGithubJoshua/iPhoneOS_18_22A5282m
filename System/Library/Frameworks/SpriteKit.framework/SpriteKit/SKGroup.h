@class NSArray;

@interface SKGroup : SKAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (BOOL)finished;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subactions;
- (id)reversedAction;

@end
