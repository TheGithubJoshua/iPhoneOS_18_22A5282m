@class NSArray;
@protocol NFCopying;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors;
@property (copy, nonatomic) id<NFCopying> prefetchedContent;

- (void)operationWillFinishWithError:(id)a0;
- (void)_continueOperationWithTodayData:(id)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
