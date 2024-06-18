@class NSString;

@interface SBFBuildVersion : NSObject

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) long long majorBuildNumber;
@property (readonly, copy, nonatomic) NSString *majorBuildLetterString;
@property (readonly, nonatomic) long long minorBuildNumber;
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString;

- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)compareBuildVersion:(id)a0 withPrecision:(long long)a1;
- (long long)compareBuildVersionString:(id)a0 withPrecision:(long long)a1;

@end
