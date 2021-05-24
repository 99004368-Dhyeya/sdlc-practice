/**
 * @file points_function_plot.c
 * @author Gobikummar Sivagnanam
 * @brief Implementation of plotting function with points
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "plotfunctions.h"

plot_check points_function_plot(functionPointer Function, double *xCoordinatePoint, double *yCoordinatePoint, int dataCount){
	RGBABitmapImageReference *imageReference = CreateRGBABitmapImageReference();

	double value = 0,resolution = 0.09, limit = 1000;

	double *xCoordinateFunction1 = malloc(limit*sizeof(double));
	double *yCoordinateFunction1 = malloc(limit*sizeof(double));

    for(int i=0;i<limit;i++){
        *(xCoordinateFunction1+i) = value;
        *(yCoordinateFunction1+i) = Function(value);
        value+=resolution;
    }

	ScatterPlotSeries *series = GetDefaultScatterPlotSeriesSettings();
	series->xs = xCoordinatePoint;
	series->xsLength = dataCount;
	series->ys = yCoordinatePoint;
	series->ysLength = dataCount;
	series->linearInterpolation = false;
	series->pointType = L"filled triangles";
	series->pointTypeLength = wcslen(series->pointType);
	series->color = CreateRGBColor(1, 0, 0);

	ScatterPlotSeries *series2 = GetDefaultScatterPlotSeriesSettings();
	series2->xs = xCoordinateFunction1;
	series2->xsLength = limit;
	series2->ys = yCoordinateFunction1;
	series2->ysLength = limit;
	series2->linearInterpolation = true;
	series2->lineType = L"solid";
	series2->lineTypeLength = wcslen(series->lineType);
	series2->lineThickness = 2;
	series2->color = CreateRGBColor(0, 0, 1);

	ScatterPlotSettings *settings = GetDefaultScatterPlotSettings();
	settings->width = 600;
	settings->height = 400;
	settings->autoBoundaries = true;
	settings->autoPadding = true;
	settings->title = L"";
	settings->titleLength = wcslen(settings->title);
	settings->xLabel = L"";
	settings->xLabelLength = wcslen(settings->xLabel);
	settings->yLabel = L"";
	settings->yLabelLength = wcslen(settings->yLabel);
	ScatterPlotSeries *s [] = {series, series2};
	settings->scatterPlotSeries = s;
	settings->scatterPlotSeriesLength = 2;

	DrawScatterPlotFromSettings(imageReference, settings);

	size_t length;
	double *pngdata = ConvertToPNG(&length, imageReference->image);
	WriteToFile(pngdata, length, "points_function_plot_check.png");
	DeleteImage(imageReference->image);

	free(xCoordinateFunction1);
	free(yCoordinateFunction1);
	free(xCoordinatePoint);
	free(yCoordinatePoint);

	return testWritePNG("points_function_plot_check.png");
}