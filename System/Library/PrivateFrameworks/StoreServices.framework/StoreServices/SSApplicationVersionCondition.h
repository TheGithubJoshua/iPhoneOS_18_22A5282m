@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersion;
}

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)evaluateWithContext:(id)a0;

@end
