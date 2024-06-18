@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1;
+ (id)regularExpression;
+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1 major:(id *)a2 minor:(id *)a3;
+ (id)versionWithString:(id)a0 error:(out id *)a1;
+ (id)versionZero;
+ (id)versionOne;

- (id)init;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToVersion:(id)a0;
- (id)debugDescription;

@end
