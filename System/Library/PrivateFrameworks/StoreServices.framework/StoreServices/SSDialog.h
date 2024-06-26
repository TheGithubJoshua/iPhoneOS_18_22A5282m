@class NSString, NSDictionary, NSArray, SSDialogButton, NSMutableDictionary;

@interface SSDialog : NSObject {
    NSArray *_buttons;
    NSMutableDictionary *_dialogDictionary;
}

@property (readonly, nonatomic) NSDictionary *dialogDictionary;
@property (readonly, nonatomic) NSString *dialogKind;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) SSDialogButton *defaultButton;

- (id)init;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (void)dealloc;
- (id)valueForProperty:(id)a0;
- (id)initWithDialogDictionary:(id)a0;

@end
