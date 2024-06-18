@class NSString, NSDictionary;

@interface BAGResourceOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleID:(id)a0 name:(id)a1 type:(unsigned long long)a2 additionalOptions:(id)a3;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 additionalOptions:(id)a2;

@end
