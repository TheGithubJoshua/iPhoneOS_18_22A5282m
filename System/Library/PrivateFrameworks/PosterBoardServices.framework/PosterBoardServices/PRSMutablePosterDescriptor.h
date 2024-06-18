@interface PRSMutablePosterDescriptor : PRSPosterDescriptor

+ (id)mutableDescriptorWithIdentifier:(id)a0;

- (BOOL)storeGalleryOptions:(id)a0 error:(out id *)a1;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;

@end
