from django.shortcuts import render
from meals.models import Food, Category
from meals.forms import MealAddForm
from django.shortcuts import redirect


# Create your views here.
def show_meals(request):
    foods = Food.objects.all()
    print(foods)
    return render(request, 'meals/index.html', {'foods': foods})

def add_meal(request):
    form = MealAddForm()
    if request.method == 'POST':
        form = MealAddForm(request.POST, request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
            form.save()
            return redirect('meals')
    return render(request, 'meals/meal_add.html', {'form': form})