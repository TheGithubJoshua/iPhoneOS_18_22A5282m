@class NSString, NSDate, AFHomeAnnouncement;

@interface _AFHomeAnnouncementMutation : NSObject <AFHomeAnnouncementMutating> {
    AFHomeAnnouncement *_base;
    NSString *_identifier;
    unsigned long long _startedHostTime;
    unsigned long long _finishedHostTime;
    NSDate *_startedDate;
    NSDate *_finishedDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasStartedHostTime : 1; unsigned char hasFinishedHostTime : 1; unsigned char hasStartedDate : 1; unsigned char hasFinishedDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIdentifier:(id)a0;
- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (id)getIdentifier;
- (void).cxx_destruct;
- (void)setStartedDate:(id)a0;
- (id)getFinishedDate;
- (unsigned long long)getFinishedHostTime;
- (id)getStartedDate;
- (unsigned long long)getStartedHostTime;
- (void)setFinishedDate:(id)a0;
- (void)setFinishedHostTime:(unsigned long long)a0;
- (void)setStartedHostTime:(unsigned long long)a0;

@end
