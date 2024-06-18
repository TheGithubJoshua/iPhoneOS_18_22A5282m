@class FMFSession;

@interface CNUIFMFFacade : NSObject

@property (readonly, nonatomic) FMFSession *fmfSession;

- (id)init;
- (id)initWithFMFSession:(id)a0;
- (void).cxx_destruct;
- (void)fetchFriendHandlesWithCompletionHandler:(id /* block */)a0;

@end
