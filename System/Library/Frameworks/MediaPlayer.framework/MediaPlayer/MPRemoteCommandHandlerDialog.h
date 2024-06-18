@class NSString, NSArray, MRSendCommandHandlerDialog;

@interface MPRemoteCommandHandlerDialog : NSObject <NSCopying>

@property (readonly, copy, nonatomic) MRSendCommandHandlerDialog *mediaRemoteType;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSArray *actions;

+ (id)dialogWithTitle:(id)a0 message:(id)a1;

- (void)addAction:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaRemoteType:(id)a0;

@end
