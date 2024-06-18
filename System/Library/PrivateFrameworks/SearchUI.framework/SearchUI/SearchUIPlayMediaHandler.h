@class SFPlayMediaCommand;

@interface SearchUIPlayMediaHandler : SearchUIMediaHandler

@property (retain) SFPlayMediaCommand *command;

- (id)intent;
- (unsigned long long)destination;
- (id)mediaMetadata;
- (BOOL)supportsIntentPath;

@end
