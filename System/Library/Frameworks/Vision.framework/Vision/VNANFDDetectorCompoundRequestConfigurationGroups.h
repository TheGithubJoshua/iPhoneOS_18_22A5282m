@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (id)init;
- (id)configurationForRequest:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)allConfigurations;

@end
