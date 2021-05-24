/**
 * @file function_plot.c
 * @author Gobikumaar Sivagnanam	
 * @brief Implementation of Function to plot the equation
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "plotfunctions.h"

plot_check function_plot(functionPointer Function){
	RGBABitmapImageReference *imageReference = CreateRGBABitmapImageReference();

	double value = 0,resolution = 0.09, limit = 1000;
	
	double *xCoordinateFunction = (double*)malloc(limit*sizeof(double));
	double *yCoordinateFunction = (double*)malloc(limit*sizeof(double));
    
    for(int i=0;i<limit;i++){
        *(xCoordinateFunction+i) = value;
        *(yCoordinateFunction+i) = Function(value);
        value+=resolution;
    }

    ScatterPlotSeries *series = GetDefaultScatterPlotSeriesSettings();
	series->xs = xCoordinateFunction;
	series->xsLength = limit;
	series->ys = yCoordinateFunction;
	series->ysLength = limit;
	series->linearInterpolation = true;
	series->lineType = L"solid";
	series->lineTypeLength = wcslen(series->lineType);
	series->lineThickness = 2;
	series->color = CreateRGBColor(0, 0, 1);

	ScatterPlotSettings *settings = GetDefaultScatterPlotSettings();
	settings->width = 600;
	settings->height = 400;
	settings->autoBoundaries = true;
    //settings->xMax = 10;
    //settings->xMin = -10;
    //settings->yMax = 3;
    //settings->yMin = -3;
	settings->autoPadding = true;
	settings->title = L"";
	settings->titleLength = wcslen(settings->title);
	settings->xLabel = L"";
	settings->xLabelLength = wcslen(settings->xLabel);
	settings->yLabel = L"";
	settings->yLabelLength = wcslen(settings->yLabel);
	ScatterPlotSeries *s [] = {series};
	settings->scatterPlotSeries = s;
	settings->scatterPlotSeriesLength = 1;

	DrawScatterPlotFromSettings(imageReference, settings);

	size_t length;
	double *pngdata = ConvertToPNG(&length, imageReference->image);
	WriteToFile(pngdata, length, "function_plot_check.png");
	DeleteImage(imageReference->image);

	free(xCoordinateFunction);
	free(yCoordinateFunction);

	return testWritePNG("function_plot_check.png");
}