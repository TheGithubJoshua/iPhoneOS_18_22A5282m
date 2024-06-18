@class NSMutableArray;

@interface AVTUIStickerPlaceholderProviderFactory : NSObject

@property (retain, nonatomic) NSMutableArray *queuedHandlers;
@property (readonly, nonatomic) id /* block */ imageProvider;

- (void).cxx_destruct;
- (id /* block */)placeholderProvider;
- (id)initWithImageProvider:(id /* block */)a0;

@end
