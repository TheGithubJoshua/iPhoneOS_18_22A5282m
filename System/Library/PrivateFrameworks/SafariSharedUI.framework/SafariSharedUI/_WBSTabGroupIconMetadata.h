@class UIImage, NSString, NSArray;

@interface _WBSTabGroupIconMetadata : NSObject {
    NSString *_uuid;
    NSArray *_tabUrlArray;
}

@property (copy) UIImage *iconImage;
@property (retain, nonatomic) id token;

- (id)_arrayOfThumbnailURLsShownInFolderIconFromTabsArray:(id)a0;
- (id)initWithTabGroup:(id)a0 token:(id)a1;
- (BOOL)hasSameIconAsTabGroup:(id)a0;
- (void).cxx_destruct;
- (id)_configuration;

@end
