@class NSError, CLSAsset;

@interface CLSAssetUploadObserver : NSObject

@property (retain, nonatomic) CLSAsset *asset;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly) double uploadProgress;
@property (readonly) NSError *uploadError;
@property (copy, nonatomic) id /* block */ onUploadProgress;
@property (copy, nonatomic) id /* block */ onUploadComplete;

- (void)startObserving;
- (void)stopObserving;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
