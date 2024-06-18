@class NSString;
@protocol TRIPaths;

@interface TRITreatmentInfo : NSObject {
    id<TRIPaths> _paths;
}

@property (retain, nonatomic) NSString *namespaceName;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic) int deploymentId;

+ (id)loadInfoForTreatment:(id)a0 namespaceName:(id)a1 paths:(id)a2;

- (BOOL)load;
- (id)infoDictionary;
- (id)url;
- (void).cxx_destruct;
- (BOOL)save;
- (id)initWithPaths:(id)a0;
- (id)_treatmentBasePath;
- (id)baseUrlForTreatment:(id)a0 namespaceName:(id)a1;
- (id)baseUrlForTreatmentsWithNamespaceName:(id)a0;
- (BOOL)loadFromUrl:(id)a0;
- (BOOL)saveToDir:(id)a0;
- (BOOL)saveToUrl:(id)a0;
- (id)treatmentDirectory;
- (id)urlWithDir:(id)a0;

@end
