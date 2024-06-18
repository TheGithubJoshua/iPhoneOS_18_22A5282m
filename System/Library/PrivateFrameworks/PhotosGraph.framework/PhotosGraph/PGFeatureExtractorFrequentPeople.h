@class PHFetchResult;

@interface PGFeatureExtractorFrequentPeople : PGAssetFeatureExtractor

@property (readonly, nonatomic) unsigned long long numberOfFrequentPeopleToExtract;
@property (retain, nonatomic) PHFetchResult *frequencySortedPersons;

- (id)featureNames;
- (id)name;
- (void).cxx_destruct;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (long long)featureLength;
- (id)initWithNumberOfFrequentPeopleToExtract:(unsigned long long)a0;

@end
