@class NSString, NSURL, UIImage;

@interface PBUIFakeBlurAsset : NSObject <BSDescriptionProviding> {
    long long _actualStyle;
    NSURL *_imageURL;
    UIImage *_image;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
