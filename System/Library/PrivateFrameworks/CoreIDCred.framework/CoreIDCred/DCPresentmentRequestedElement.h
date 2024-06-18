@class NSString;

@interface DCPresentmentRequestedElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *elementIdentifier;
@property unsigned long long intentToRetain;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithElementIdentifier:(id)a0 intentToRetain:(unsigned long long)a1;

@end
