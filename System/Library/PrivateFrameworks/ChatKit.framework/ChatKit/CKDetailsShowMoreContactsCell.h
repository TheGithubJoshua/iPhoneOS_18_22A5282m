@class NSString;

@interface CKDetailsShowMoreContactsCell : CKDetailsCell <CKDetailsCell>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;
+ (Class)cellClass;
+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;


@end
