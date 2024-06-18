@class NSString;

@interface SSRestrictionCondition : SSProtocolCondition {
    NSString *_restrictionName;
}

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)evaluateWithContext:(id)a0;

@end
