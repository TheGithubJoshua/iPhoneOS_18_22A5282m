@class NSString;

@interface Version : NSObject <NSCopying>

@property (readonly) unsigned int major;
@property (readonly) unsigned int minor;
@property (readonly) unsigned int bugfix;
@property (readonly) NSString *modifier;

+ (id)versionZero;
+ (id)allVersionedKeysForKey:(id)a0 modifier:(id)a1;
+ (id)pre3_15_0_Mapping;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToVersion:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareToVersion:(id)a0;
- (id)getVersionAsString;
- (id)initWithVersionString:(id)a0 error:(id *)a1;
- (BOOL)isAllDigitsInString:(id)a0;
- (id)versionedKey:(id)a0 modifier:(id)a1;

@end
