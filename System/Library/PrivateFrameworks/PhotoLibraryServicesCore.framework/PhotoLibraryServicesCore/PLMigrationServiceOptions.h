@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *clientBundleId;
@property (copy) NSString *suggestedDestinationName;
@property unsigned short option;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPMSOption:(unsigned short)a0;
- (id)nameForOption:(unsigned short)a0;

@end
