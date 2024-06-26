@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PLFigPreheatItem : PLPreheatItem {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_cachedImage;
    BOOL _cachedImageCancelled;
    unsigned long long _requestID;
    struct CMPhotoDecompressionContainer { } *_container;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
    BOOL _dataIsLoading;
    _Atomic BOOL _cancelled;
    _Atomic BOOL _hasCachedImage;
}

@property (setter=_setHasCachedImage:) BOOL _hasCachedImage;
@property (readonly, nonatomic) unsigned int options;
@property (readonly, copy, nonatomic) NSString *imagePath;

- (id)decodeSessionOptions;
- (void)_cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)_cacheImage;
- (void)_leaveWaitGroupIfNeeded;
- (void)_loadPreheatDataWithHandler:(id /* block */)a0;
- (void)_uncancel;
- (BOOL)addImageHandler:(id /* block */)a0;
- (id)cachedImage:(BOOL *)a0;
- (id)cachedImageIfAvailable:(BOOL *)a0;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithImagePath:(id)a0 format:(unsigned short)a1 imageType:(long long)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned int)a4;
- (id)initialDecodeSessionOptions;
- (id)preheatData;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)a0;

@end
