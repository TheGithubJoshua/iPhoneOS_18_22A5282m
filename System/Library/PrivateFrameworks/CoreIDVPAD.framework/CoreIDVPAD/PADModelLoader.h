@class PADVNPrintReplayS2Model, PADVNFacePoseModel;

@interface PADModelLoader : NSObject

@property (readonly, nonatomic) PADVNFacePoseModel *facePoseModel;
@property (readonly, nonatomic) PADVNPrintReplayS2Model *printReplayS2Model;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCompletion:(id /* block */)a0;

@end
