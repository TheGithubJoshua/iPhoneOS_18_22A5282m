@class NSItemProvider, WBSStartPageBackgroundImagesDataSource, WBSStartPageBackgroundImageDescription;

@interface SFStartPageBackgroundImageModel : NSObject {
    WBSStartPageBackgroundImagesDataSource *_dataSource;
    long long _index;
}

@property (readonly, nonatomic) WBSStartPageBackgroundImageDescription *imageDescription;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL isCustomImage;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithItemProvider:(id)a0;
- (void)getThumbnailImageWithCompletionHandler:(id /* block */)a0;
- (id)initWithIndex:(long long)a0 inDataSource:(id)a1 selected:(BOOL)a2;

@end
