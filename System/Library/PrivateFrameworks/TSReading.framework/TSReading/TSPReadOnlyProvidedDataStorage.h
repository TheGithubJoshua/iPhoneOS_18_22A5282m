@class NSString, SFUDataRepresentation, SFUCryptoKey;

@interface TSPReadOnlyProvidedDataStorage : NSObject <TSPDataStorage> {
    SFUDataRepresentation *_dataRep;
}

@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataRepresentation:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)AVAssetWithOptions:(id)a0 contentTypeUTI:(id)a1;
- (id)AVAssetWithOptions:(id)a0;
- (id)AVAssetWithOptions:(id)a0 usingResourceLoaderWithContentTypeUTI:(id)a1;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (id)applicationDataLocator;
- (id)bookmarkDataWithOptions:(unsigned long long)a0;
- (id)filenameForPreferredFilename:(id)a0;
- (BOOL)isInPackage:(id)a0;
- (struct CGDataProvider { } *)newCGDataProvider;
- (struct CGImageSource { } *)newCGImageSource;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (BOOL)writeToBundleWriter:(id)a0 preferredFilename:(id)a1 filename:(id *)a2 didCopyDataToBundle:(BOOL *)a3;

@end
