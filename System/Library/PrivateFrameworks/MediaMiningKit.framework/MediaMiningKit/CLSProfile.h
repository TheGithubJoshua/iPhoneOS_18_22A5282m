@class NSString;

@interface CLSProfile : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)classIdentifier;
+ (id)identifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)uniqueIdentifier;
- (void)processResultsSynchronouslyForInvestigation:(id)a0 withProgressBlock:(id /* block */)a1;

@end
