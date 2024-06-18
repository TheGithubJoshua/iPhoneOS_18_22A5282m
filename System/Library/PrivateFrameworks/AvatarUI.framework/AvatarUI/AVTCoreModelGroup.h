@class NSString, NSDictionary, NSArray, AVTEditingPreviewMode;

@interface AVTCoreModelGroup : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *symbolNames;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) AVTEditingPreviewMode *previewMode;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 symbolNames:(id)a1 previewMode:(id)a2 categories:(id)a3;

@end
