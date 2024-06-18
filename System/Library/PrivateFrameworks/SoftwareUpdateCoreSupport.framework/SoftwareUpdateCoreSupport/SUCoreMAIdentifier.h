@class NSString, NSData;

@interface SUCoreMAIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *releaseType;
@property (retain, nonatomic) NSData *measurement;
@property (retain, nonatomic) NSString *measurementAlgorithm;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithProductVersion:(id)a0 productBuildVersion:(id)a1 releaseType:(id)a2 measurement:(id)a3 measurementAlgorithm:(id)a4;

@end
