@class NSString, NSData, NSItemProvider;

@interface WebItemProviderRegistrationInfoList : NSObject {
    struct RetainPtr<NSMutableArray> { void *m_ptr; } _representations;
}

@property (nonatomic) struct CGSize { double width; double height; } preferredPresentationSize;
@property (copy, nonatomic) NSString *suggestedName;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (nonatomic) long long preferredPresentationStyle;
@property (copy, nonatomic) NSData *teamData;

- (unsigned long long)numberOfItems;
- (id)init;
- (id)itemAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)enumerateItems:(id /* block */)a0;
- (void)addData:(id)a0 forType:(id)a1;
- (void)addPromisedType:(id)a0 fileCallback:(id /* block */)a1;
- (void)addRepresentingObject:(id)a0;

@end
