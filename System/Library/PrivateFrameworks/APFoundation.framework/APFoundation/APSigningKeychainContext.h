@class NSNumber, NSString;

@interface APSigningKeychainContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *contextRef;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSNumber *isStashed;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextRef:(id)a0 sessionIdentifier:(id)a1 isStashed:(id)a2;

@end
