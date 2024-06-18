@class NSString, UIImage, MPCPlayerResponse, MPArtworkCatalog;

@interface MRUArtwork : NSObject

@property (retain, nonatomic) MPCPlayerResponse *response;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) MPArtworkCatalog *catalog;
@property (readonly, nonatomic) NSString *placeholderSymbolName;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithImage:(id)a0 placeholderSymbolName:(id)a1;
- (id)initWithMPCResponse:(id)a0 placeholderSymbolName:(id)a1;

@end
