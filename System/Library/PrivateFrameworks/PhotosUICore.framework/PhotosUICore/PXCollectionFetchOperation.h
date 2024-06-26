@class PHCollection, PHFetchResult, PHFetchOptions;
@protocol PXCollectionFetchOperationDelegate;

@interface PXCollectionFetchOperation : NSOperation

@property (retain, nonatomic) PHFetchResult *outputFetchResult;
@property (weak, nonatomic) id<PXCollectionFetchOperationDelegate> delegate;
@property (retain, nonatomic) PHFetchOptions *fetchOptions;
@property (readonly, nonatomic) PHCollection *collection;

+ (id)fetchOperationWithCollection:(id)a0 delegate:(id)a1;

- (void)main;
- (id)init;
- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;
- (void)handleFinish;
- (void)handleBegin;

@end
