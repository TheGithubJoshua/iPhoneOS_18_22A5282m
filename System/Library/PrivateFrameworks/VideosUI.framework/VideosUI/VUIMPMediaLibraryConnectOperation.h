@class NSError, NSObject, MPMediaLibrary;
@protocol OS_dispatch_source;

@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer;
@property (copy, nonatomic) id /* block */ progressBlock;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)_notifyClientOfProgress:(float)a0;
- (void)_startProgressTimer;
- (void)_stopProgressTimer;
- (id)initWithMediaLibrary:(id)a0;

@end
