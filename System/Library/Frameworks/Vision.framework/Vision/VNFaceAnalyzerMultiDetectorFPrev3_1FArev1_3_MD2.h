@interface VNFaceAnalyzerMultiDetectorFPrev3_1FArev1_3_MD2 : VNFaceAnalyzerMultiDetector

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (const void *)modelVersionForOptions:(id)a0;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierFaceprint_3_1_0;
+ (id)inferenceNetworkIdentifiers;
+ (id)availableVNInferenceNetworkIdentifierFaceprintVersions;

- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;

@end
