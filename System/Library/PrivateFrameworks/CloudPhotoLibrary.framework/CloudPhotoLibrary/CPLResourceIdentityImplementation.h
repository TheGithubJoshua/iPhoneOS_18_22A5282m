@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)fileUTIForExtension:(id)a0;
+ (id)storageNameForFingerPrint:(id)a0 fileUTI:(id)a1 bucket:(id *)a2;
+ (BOOL)isValidMMCSV2Signature:(id)a0;
+ (id)fingerPrintForData:(id)a0 error:(id *)a1;
+ (id)identityFromStoredIdentity:(id)a0;
+ (id)identityForStorageName:(id)a0;
+ (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
+ (id)extensionForFileUTI:(id)a0;
+ (id)_fingerPrintForFD:(int)a0 error:(id *)a1;
+ (id)zeroByteFileFingerPrint;
+ (id)fingerPrintForFD:(int)a0 error:(id *)a1;
+ (void)setMMCImplementationForPlatform:(id)a0;

- (id)identityForStorage;

@end
