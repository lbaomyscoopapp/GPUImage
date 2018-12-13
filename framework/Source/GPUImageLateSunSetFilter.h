#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add lookup_late_sunset.png
//       from Resources folder to your application bundle.

@interface GPUImageLateSunSetFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
