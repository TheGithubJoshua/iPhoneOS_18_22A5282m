@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
    NSString *_representation;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (Class)superclass;
- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isNSNumber__;
- (void)dealloc;
- (BOOL)isEqualToNumber:(id)a0;
- (id)initWithNumber:(id)a0 representation:(id)a1;

@end
