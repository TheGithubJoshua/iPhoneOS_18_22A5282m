@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSArray *filters;

- (id)initWithCoder:(id)a0;
- (id)initWithFilters:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubcommands:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end
